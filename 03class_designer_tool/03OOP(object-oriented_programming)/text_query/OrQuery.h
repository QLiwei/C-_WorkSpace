#ifndef __OR_QUERY_H__
#define __OR_QUERY_H__

#include "BinaryQuery.h"

class OrQuery: public BinaryQuery
{
    friend Query operator|(const Query&, const Query&);
    OrQuery(const Query &left, const Query &right):
                BinaryQuery(left, right, "|") { }
    // 具体的类OrQuery继承了rep并且定义了其他纯虚函数
    QueryResult eval(const TextQuery&) const;
};

inline Query operator|(const Query &lhs, const Query &rhs)
{
    return std::shared_ptr<QueryBase>(new OrQuery(lhs, rhs));
}

#endif /* __OR_QUERY_H__ */
