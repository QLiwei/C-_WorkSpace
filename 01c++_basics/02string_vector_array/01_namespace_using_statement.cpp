/**
 * @file 01_namespace_using_statement.cpp
 * @brief namespace using statement
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-03-30       vector(vector_qiu@163.com)      first version
 *
 */
#include <iostream>

/**
 * @brief using namespace::name;
 * 声明上述语句，就可以直接访问命名空间中的名字
 *  1.每个名字都需要独立的using声明
 *  2.头文件不应包含using声明
 */
using std::cin;


/**
 * @brief The application entry point.
 *
 * @return int
 */
int main() {
    int i;
    cin >> i;
    std::cout << i << std::endl;
    return 0;
}