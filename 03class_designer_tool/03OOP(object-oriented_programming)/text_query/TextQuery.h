#ifndef __TEXT_QUERY_H__
#define __TEXT_QUERY_H__

#include <memory>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include "QueryResult.h"

class TextQuery
{
public:
    using line_no = std::vector<std::string>::size_type;
    TextQuery() = default;
    TextQuery(std::ifstream &);
    QueryResult query(const std::string&) const;
    ~TextQuery() = default;
private:
    std::shared_ptr<std::vector<std::string>> file;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> vm;
};

#endif /* __TEXT_QUERY_H__ */
