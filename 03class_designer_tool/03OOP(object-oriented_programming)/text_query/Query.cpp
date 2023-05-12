#include "Query.h"


std::ostream & operator<<(std::ostream &os, const Query &query)
{
    // Query::rep通过它的QueryBase指针对rep()进行了虚调用
    return os << query.rep();
}

