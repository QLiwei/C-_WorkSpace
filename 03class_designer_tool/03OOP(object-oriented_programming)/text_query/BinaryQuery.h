#ifndef __BINARY_QUERY_H__
#define __BINARY_QUERY_H__

class BinaryQuery
{
protected:
    BinaryQuery(const Query &l, const Query &r, std::string s):
        lhs(l), rhs(r), opSym(s) { }
    // 抽象类：BinaryQuery不定义eval
    std::string rep() const { return "(" + lhs.rep() + " "
                                        + opSym + " "
                                        + rhs.rep() + ")"; }
    Query lhs, rhs;         // 左侧和右侧运算符对象
    std::string opSym;      // 运算符的名字
};




#endif /* __BINARY_QUERY_H__ */
