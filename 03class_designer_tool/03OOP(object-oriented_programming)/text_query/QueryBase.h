#ifndef __QUERT_BASE_H__
#define __QUERT_BASE_H__

#include <string>
#include "TextQuery.h"
#include "QueryResult.h"

class QueryBase
{
    friend class Query;
protected:
    using line_no = TextQuery::line_no; // 用于eval函数
    virtual ~QueryBase() = default;
private:
    // eval 返回与当前Query匹配的QueryResult
    virtual QueryResult eval(const TextQuery&) const = 0;
    // rep时表示查询的一个string
    virtual std::string rep() const = 0;
};



#endif /* __QUERT_BASE_H__ */
