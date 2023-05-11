#include <memory>
#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <fstream>
#include <sstream>

using namespace std;

class QueryResult;
class TextQuery
{
public:
    using line_no = std::vector<std::string>::size_type;
    TextQuery();
    TextQuery(std::ifstream &);
    QueryResult query(const std::string&) const;
    ~TextQuery();
private:
    std::shared_ptr<std::vector<std::string>> file;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> vm;
};

TextQuery::TextQuery(/* args */)
{
}

// 读取输入文件并建立单词到行号的映射
TextQuery::TextQuery(std::ifstream &is) : file(new vector<string>)
{
    string text;
    while (getline(is, text)) {     // 对文件中每一行
        file->push_back(text);      // 保存此行文本
        int n = file->size() - 1;   // 当前行号
        istringstream line(text);   // 将行文本分解为单词
        string word;
        while (line >> word) {      // 对行中每个单词
            // 如果单词不在vm中，以之为下标在vm中添加一项
            auto &lines = vm[word]; // lines是一个shared_ptr
            if (!lines) {           // 在我们第一次遇到这个单词时，此指针为空
                lines.reset(new set<line_no>);  // 分配一个新的set
            }
            lines->insert(n);       // 将此行号插入set中
        }
    }
}

TextQuery::~TextQuery()
{
}

QueryResult TextQuery::query(const string &sought) const
{
    // 如果未找到sought，将返回一个指向此set的指针
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    // 使用find而不是下标运算符来查找单词，避免将单词添加vm中
    auto loc = vm.find(sought);
    if (loc == vm.end()) {
        return QueryResult(sought, nodata, file);
    } else {
        return QueryResult(sought, loc->second, file);
    }
}

ostream &print(ostream &os, const QueryResult &qr)
{
    // 如果找到了单词，打印出现次数和所有出现的位置
    os << qr.sought << " occurs " << qr.lines->size() << " "
        << make_plural(qr.lines->size(), "time", "s") << endl;
    // 打印单词出现的每一行
    for (auto num : *qr.lines) {
        os << "\t(line " << num + 1 << ")"
        << *(qr.file->begin() + num) << endl;
    }
    return os;
}

void runQueries(ifstream &infile)
{
    // infile是一个ifstream 指向我们要处理的文件
    TextQuery tq(infile);

    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        // 若遇到文件尾或用户输入了‘q’是循环终止
        if (!(cin >> s) || s == "q") break;

        print(cout, tq.query(s)) << endl;
    }
}

int main() {
    ifstream file;
    file.open("query.txt");
    runQueries(file);
    return 0;
}
