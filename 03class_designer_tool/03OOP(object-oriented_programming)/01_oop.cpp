/**
 * @file 01_oop.cpp
 * @brief OOP
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-05-11       vector(vector_qiu@163.com)      first version
 *
 */

#include <iostream>
#include "Basket.h"
#include "BulkQuote.h"
#include "DiscQuote.h"
#include "Quote.h"

/**
 * 基类 派生类
 *
 *  防止继承发生：final
 *  存在继承关系的类型之间的转换规则
 *      从派生类向基类的类型转换只对指针或引用有效
 *      基类向派生类不存在隐式类型转换
 *      和任何其他成员一样，派生类向基类的类型转换也可能会由于访问受限而变得不可行
 *
 * 虚函数
 *
 * 抽象基类
 *
 * 访问控制与继承
 *
 * 继承中的类作用域
 *
 * 构造函数与拷贝控制
 *
 * 容器与继承
 *
 *
 */



/**
 * @brief The application entry point.
 *
 * @return int
 */
int main(int argc, char *argv[]) {
    Basket basket;
    Quote q = Quote("book1", 100);
    for (size_t i = 1; i < 10; i ++) {
        basket.add_item(q);
    }

    basket.total_receipt(cout);

    return 0;
}
