#ifndef __AND_QUERY_H__
#define __AND_QUERY_H__

#include "BinaryQuery.h"

class AndQuery: public BinaryQuery
{
    friend Query operator&(const Query&, const Query&);
    AndQuery(const Query &left, const Query &right):
                BinaryQuery(left, right, "&") { }
    // 具体的类AndQuery继承了rep并且定义了其他纯虚函数
    QueryResult eval(const TextQuery&) const;
};

inline Query operator&(const Query &lhs, const Query &rhs)
{
    return std::shared_ptr<QueryBase>(new AndQuery(lhs, rhs));
}

#endif /* __AND_QUERY_H__ */
