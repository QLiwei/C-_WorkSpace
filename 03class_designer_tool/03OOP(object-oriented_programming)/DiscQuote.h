#ifndef __DISC_QUOTE_H__
#define __DISC_QUOTE_H__

#include "Quote.h"

class DiscQuote : public Quote
{
protected:
    std::size_t quantity = 0;
    double discount = 0.0;
public:
    DiscQuote() = default;
    DiscQuote(const std::string& book, double price,
                std::size_t qty, double disc) :
                Quote(book, price),
                quantity(qty), discount(disc) { }
    ~DiscQuote();
    double net_price(std::size_t) const = 0; // 纯虚函数
};

#endif /* __DISC_QUOTE_H__ */
