#ifndef __QUERY_H__
#define __QUERY_H__

#include <memory>
#include <string>
#include "QueryBase.h"
#include "QueryResult.h"
#include "TextQuery.h"

class Query
{
    friend Query operator~(const Query &);
    friend Query operator|(const Query&, const Query&);
    friend Query operator&(const Query&, const Query&);
private:
    std::shared_ptr<QueryBase> q;
    Query(std::shared_ptr<QueryBase> query) : q(query) {}
public:
    Query(const std::string&); // 构建一个新的WordQuery
    // 接口函数：调用对应的QueryBase操作
    QueryResult eval(const TextQuery &t) const
        { return q->eval(t); }
    std::string rep() const { return q->rep(); }
};


#endif /* __QUERY_H__ */
