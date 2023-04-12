/**
 * @file 04_class.cpp
 * @brief class
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-03-29       vector(vector_qiu@163.com)      first version
 *
 */
#include <iostream>
#include "sales_item.h"

/**
 * @brief The application entry point.
 *
 * @return int
 */
int main() {
    sales_item book;
    std::cout << "读入ISBN号，售出的册数以及销售价格：" << std::endl;
    std::cin >> book;
    std::cout << book << std::endl;
    return 0;
}