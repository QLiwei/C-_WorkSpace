#ifndef __NOT_QUERY_H__
#define __NOT_QUERY_H__

class NotQuery : public QueryBase
{
    friend Query operator~(const Query &);
    NotQuery(const Query &q) : query(q) {}
    // 具体的类：NotQuery将定义所有继承而来的纯虚函数
    std::string rep() const { return "~(" + query().rep() + ")"; }
    QueryResult eval(const TextQuery&) const;
    Query query;
};

inline Query operator~(const Query &operand)
{
    return std::shared_ptr<QueryBase>(new NotQuery(operand));
}



#endif /* __NOT_QUERY_H__ */
