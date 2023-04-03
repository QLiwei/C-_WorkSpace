/**
 * @file 03_std_vector_type.cpp
 * @brief standard library vector type
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-03-30       vector(vector_qiu@163.com)      first version
 *
 */
#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

/**
 * @brief The application entry point.
 *
 * @return int
 */
int main() {
    /**
     * @brief vector -> class template
     *  vector能容纳绝大多数类型的对象作为其元素，但是因为引用不是对象，所以不存在包含引用的vector
     * Define and initialize a vector
     *  vector<T> v1;           v1是一个空的vector T类型
     *  vector<T> v2(v1);       v2中包含有v1所有元素的副本
     *  vector<T> v2 = v1;
     *  vector<T> v3(n, val);
     *  vector<T> v5{a,b,c...};
     *  vector<T> v6 = {a,b,c...};
     *
     */

    /**
     * @brief vector 操作
     *  push_back() 对象添加元素:: vector对象能高效增长
     *  empty()
     *  size()
     *  v[n]
     *  v1 = v2
     *  v1 != v2
     *  < <= > >=
     */
#if 0
    vector<int> v2;

    for (int i = 0; i != 100; ++i)
    {
        v2.push_back(i);
    }
    for (auto v : v2) {
        cout << v << " ";
    }
    cout << endl;

#endif

#if 0
    vector<unsigned> scores(11, 0);
    unsigned grade;

    while (cin >> grade)
    {
        if (grade <= 100)
        {
            ++scores[grade/10];
        }
    }
    for (auto i : scores)
    {
        cout << i << " ";
    }
    cout << endl;
#endif
/**
 * @brief 不能用下标形式添加元素
 *  只能对确知已存在的元素执行下标操作，试图用下标的形式访问一个不存在的元素将引发错误，
 *  这种错误不会被编译器发现（buffer overflow）
 *
 */
    return 0;
}