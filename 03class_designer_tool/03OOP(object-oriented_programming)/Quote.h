#ifndef __QUOTE_H__
#define __QUOTE_H__

#include <string>

using namespace std;
/**
 * 基类必须将它的两种成员函数区分开来：
 *  一种是基类希望派生类进行覆盖的函数 -> 定义为虚函数(virtual)
 *      使用指针或引用调用虚函数时，该调用被动态绑定
 *      根据引用或指针所绑定的对象类型不同，执行基本版本或者派生类版本
 *  另一种是基类希望派生类直接继承而不要改变的函数
 *
 * 访问控制与继承
 *  派生类可以访问公有成员而不能访问私有成员
 *  protected：派生类有权访问该成员，同时禁止其他用户访问T
 *
 */
class Quote
{
private:
    std::string bookNo; // ISBN编号
protected:
    double price = 0.0; // 代表普通状态下不打折
public:
    Quote() = default;
    Quote(const std::string &book, double sales_price) :
                bookNo(book), price(sales_price) {}
    Quote(const Quote&) = default;
    Quote(Quote&&) = default;
    Quote &operator = (const Quote&) = default;
    Quote &operator = (Quote&&) = default;
    std::string isbn() const { return bookNo; }
    virtual Quote* clone() const & { return new Quote(*this); }
    virtual Quote* clone() && { return new Quote(std::move(*this)); }
    virtual double net_price(std::size_t n) const { return n * price; }
    virtual ~Quote() = default;
};


#endif /* __QUOTE_H__ */