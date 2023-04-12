/**
 * @file 05_std_array_type.cpp
 * @brief standard library array type
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-04-03       vector(vector_qiu@163.com)      first version
 *
 */
#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using std::vector;
using std::end;
using std::begin;
using std::string;
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
     * @brief array vector
     *  1.都是存放相同类型对象的容器
     *  2.array的大小确定不变，不能随意像数组中增加元素
     *
     */

    /**
     * @brief Definition and initialization
     *
     */
#if 0
    unsigned cnt 42;
    constexpr unsigned sz = 42;
    int arr[10];
    int *parr[sz];
    string bad[cnt]; // 错误定义 cnt不是常量表达式
    string strs[get_size()]; //get_size是constexpr时正确
#endif
#if 0
    const unsigned sz = 3;
    int ial[sz] = {0, 1, 2};
    int a2[] = {0,1,2};
    int a3[5] = {0,1,2};
    string a4[3] = {"hi", "bye"};
    // int a5[2] = {0, 1, 2}; //错误初始化
#endif
#if 0
    char a1[] = {'C', '+', '+'};
    char a2[] = {'C', '+', '+', '\0'};
    char a3[] = "C++";
    // const char a4[6] = "Daniel"; // 错误 没有空间存放空白字符
#endif
    /**
     * @brief 不允许拷贝和赋值
     *  int a[] = {0,1,2,3};
     *  int a2[] = a; // X
     *  a2 = a;
     *
     */
#if 0
    int *ptrs[10];              // 指针[数组]
    int &refs[10] = /* */ ;     // 错误，不存在引用的数组
    int (*Parray)[10] = &arr;   // 数组[指针] 指向含有10个整数的数组
    int (&arrRef)[10] = arr;    // 数组[引用] arrRef引用一个含有10个整数的数组
#endif
/**
 * @brief 访问数组元素
 *  下标 size_t 类型，是一种机器相关的无符号类型，它被设计得足够大以便于能表示内存中的任意对象大小
 *  cstddef头文件中定义了size_t类型 C：stddef.h 的c++本版本
 */
#if 0
    unsigned scores[11] = {}; // 全部初始化为0
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            ++scores[grade/10];
        }
    }
    for (auto i : scores)
        cout << i << " ";
    cout << endl;
#endif
/**
 * @brief pointer and array
 *  使用数组的时候编译器一般会把它转化成指针
 *
 * 数组名 编译器会自动将其替换为一个指向数组首元素的指针
 */
#if 0
    string nums[] = {"one", "two", "there"};
    string *p = &nums[0];
#endif
#if 0
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto ia2(ia); // ia2是一个整型指针，指向ia的第一个元素
    auto ia2(&ia[0]); // int * 类型
    // decltype(ia) -> 10个整数构成的数组
    decltype(ia) ia3 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // ia3 = p;  // 错误
    ia3[4] = i;
#endif
/**
 * @brief 指针也是迭代器
 *
 *
 */
#if 0
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = arr;
    int *e = &arr[10];
    for (int *b = arr; b != e; ++b) {
        cout << *b << endl;
    }
#endif
/**
 * @brief 标准库函数begin end
 * head file iterator
 *  begin() 返回指向ia首元素的指针
 *  end()   返回指向ia尾元素下一位置的指针
 */
#if 0
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *beg = begin(ia);
    int *last = end(ia);
    while (beg != last && *beg >= 0) {
        cout << *beg << " ";
        ++beg;
    }
    cout << endl;
#endif
    return 0;
}