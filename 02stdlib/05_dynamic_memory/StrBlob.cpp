#include <memory>
#include <string>
#include <vector>
#include <iostream>

using namespace std;


class StrBlob
{
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob(/* args */) : data(make_shared<vector<string>>()) {}
    StrBlob(std::initializer_list<std::string> il) : data(make_shared<vector<string>>(il)) {}
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const std::string &t) {data->push_back(t); }
    void pop_back();

    std::string& front();
    std::string& back();
    ~StrBlob();
private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};

StrBlob::~StrBlob()
{
}

void StrBlob::check(size_type i, const string &msg) const
{
    if (i >= data->size()){
        cout << "out of rang " << endl;
    }
}

string& StrBlob::front()
{
    check(0, "front on empty StrBlob");
    return data->front();
}

string& StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

int main() {


    return 0;
}