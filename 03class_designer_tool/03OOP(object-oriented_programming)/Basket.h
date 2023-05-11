#ifndef __BASKET_H__
#define __BASKET_H__

#include "Quote.h"
#include <memory>
#include <set>

using namespace std;

class Basket
{
private:
    static bool compare(const std::shared_ptr<Quote> &lhs,
                        const std::shared_ptr<Quote> &rhs)
        { return lhs->isbn() < rhs->isbn(); }
    // multiset保存多个报价，按照compare成员排序
    std::multiset<std::shared_ptr<Quote>, decltype(compare) *>
        items{compare};
public:
    Basket() = default;
    void add_item(const Quote &sale)
        { items.insert(std::shared_ptr<Quote>(sale.clone())); }
    void add_item(Quote &&sale)
        { items.insert(std::shared_ptr<Quote>(std::move(sale).clone())); }
    double total_receipt(std::ostream&) const;
    ~Basket() = default;
};

#endif /* __BASKET_H__ */
