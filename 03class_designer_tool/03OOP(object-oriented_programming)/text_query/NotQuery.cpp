#include "NotQuery.h"


QueryResult NotQuery::eval(const TextQuery& text) const
{
    // 通过Query运算对象对eval进行虚调用
    auto result = query.eval(text);
    // 开始时结果set为空
    auto ret_lines = make_shared<set<line_no>>();
    // 我们必须在运算对象出现的所有行中进行迭代
    auto beg = result.begin(), end = result.end();
    // 对于输入的文件中的每一行，如果该行不在result当中，则将其添加到ret_lines
    auto sz = result.get_file()->size();
    for (size_t i = 0; i != sz; i++)
    {
        if (beg = end || *beg != n) {
            ret_lines->insert(n);   // 如果不在result当中 添加一行
        } else if (beg != end) {
            ++beg;  // 否则继续获取result的下一行
        }
    }
    return QueryResult(rep(), ret_lines, result.get_file());
}

