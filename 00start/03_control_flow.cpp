/**
 * @file 03_control_flow.cpp
 * @brief control flow while-for-if
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-03-28       vector(vector_qiu@163.com)      first version
 *
 */
#include <iostream>

/**
 * @brief 编译错误
 *  syntax error:
 *  type error:
 *  declaration error:
 *
 *
 */
*/

/**
 * @brief The application entry point.
 *
 * @return int
 */
int main() {
    int sum = 0;
    int value = 0;

    /* Window：文件结束符：Ctrl+Z UNIX:Crtl+D */
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}