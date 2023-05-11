#include "Basket.h"

#include <ostream>

// 计算并打印销售给定数量的某种书籍所得的费用
double print_total(std::ostream &os,
                   const Quote &item, size_t n)
{
    // 根据传入 item 形参的对象类型调用 Quote:：net_price
    // 或者 Bulk_quote::net_price
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() // 调用 Quote:isbn
       << " # sold: " << n << " total due: " << ret << endl;
    return ret;
}

double Basket::total_receipt(std::ostream& os) const
{
    double sum = 0.0; // 保存实时计算出的总价格

    // iter指向ISBN相同的一批元素中的第一个
    // upper_bound返回一个迭代器，该迭代器指向这批元素的尾后位置
    for (auto iter = items.cbegin(); iter != items.cend(); iter = items.upper_bound(*iter))
    {
        sum += print_total(os, **iter, items.count(*iter));
    }
    os << "Total Sale: " << sum << endl;

    return sum;
}
