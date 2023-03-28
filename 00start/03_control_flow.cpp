/**
 * @file 03_control_flow.cpp
 * @brief control flow
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-03-28       vector(vector_qiu@163.com)      first version
 *
 */
#include <iostream>


/**
 * @brief The application entry point.
 *
 * @return int
 */
int main() {
    int sum = 0;
    int value = 0;

    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}