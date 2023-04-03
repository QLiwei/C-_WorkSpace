/**
 * @file 06_Cstd_string_type.cpp
 * @brief C standard library string type
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
/**
 * @brief
 *  strlen(p)       // p的长度
 *  strcmp(p1, p2)  // p1 p2 比较
 *  strcat(p1, p2)  // p2拼接到p1后
 *  strcpy(p1, p2)  // p2拷贝给p1
 *
 */
#if 0
    const char * s1 = "A string example";
    const char * s2 = "A different string";
    cout << strlen(s1) << endl;

    if (strcmp(s1, s2) > 0)
    {
        cout << s1 << " > " << s2 << endl;
    }
    else
    {
        cout << s1 << " < " << s2 << endl;
    }
#endif
/**
 * @brief C风格字符串 string对象
 *
 */
#if 0
    string s("Hello World");
    const char *str = s.c_str();
    cout << str << endl;
#endif
/**
 * @brief 使用数组初始化vector对象
 *
 */
#if 0
    int int_arr[] = {0, 1, 2, 3, 4, 5};
    vector<int> ivec(begin(int_arr), end(int_arr));
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
#endif
    return 0;
}