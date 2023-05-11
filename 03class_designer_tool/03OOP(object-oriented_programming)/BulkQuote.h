#ifndef __BULK_QUOTE_H__
#define __BULK_QUOTE_H__

#include "DiscQuote.h"

/**
 * 派生类列表 :访问权限 基类,
 *
 */
class BulkQuote : public DiscQuote
{
public:
    BulkQuote() = default;
    BulkQuote(const std::string & book, double price,
                std::size_t qty, double disc) :
                DiscQuote(book, price, qty, disc) {}
    BulkQuote* clone() const & { return new BulkQuote(*this); }
    BulkQuote* clone() && { return new BulkQuote(std::move(*this)); }
    ~BulkQuote();
    double net_price(std::size_t) const override;
};



#endif /* __BULK_QUOTE_H__ */
