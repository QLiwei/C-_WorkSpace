#include "QueryResult.h"


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
