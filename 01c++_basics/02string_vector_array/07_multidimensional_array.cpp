/**
 * @file 07_multidimensional_array.cpp
 * @brief multidimensional array
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-03-30       vector(vector_qiu@163.com)      first version
 *
 */
#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;

/**
 * @brief The application entry point.
 *
 * @return int
 */
int main() {
#if 0
    int m_arr[3][2] = {{1,2},{2,3},{1,3}};
    size_t cnt = 2;
    for (auto &row : m_arr) {
        for (auto &col : row) {
            col = cnt;
            ++cnt;
        }
    }
    for (const auto &row : m_arr) {
        for (auto col : row) {
            cout << col << " ";
        }
    }
    cout << endl;
#endif

#if 0
    int ia[3][4] = {{1,2,3,4},{6,7,8,9},{12,23, 45, 56}};
    int (*p)[4] = ia;
    cout << *ia << " " << *(ia +  1) << " " << *(*(ia + 1) + 1) << endl;

#endif

/**
 * @brief 类型别名简化多维数组的指针
 *
 */
#if 1
    int ia[3][4] = {{1,2,3,4},{6,7,8,9},{12,23, 45, 56}};
    using int_array = int[4];
    // typedef int int_array[4];

    for (int_array *p = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q) {
            cout << *q << ' ';
        }
        cout << endl;
    }
#endif
    return 0;
}