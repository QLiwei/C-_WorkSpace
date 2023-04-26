/**
 * @file 01function_basics.cpp
 * @brief function
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-04-25       vector(vector_qiu@163.com)      first version
 *
 */
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::string;
using std::initializer_list;

int fact(int val);
void add(int &i);
void add2(int *i);
void add3(int i);
void print(const int *beg, const int *end);
void error_msg(initializer_list<string> il);
inline const string &shorter_string(const string &s1, const string &s2);

/**
 * @brief The application entry point.
 *  ./main d c a
 *  argc: 命令行参数个数 (4)
 *  argv[0] 程序的名字 ("main")
 *  argv[1] 形参1 ("d") ...
 * @return int
 */
int main(int argc, char *argv[]) {
#if 0
    cout << "10! = " << fact(10) << " " << endl;
#endif

/**
 * @brief 参数传递
 *  值传递: 实参和形参相互独立
 *  引用传递: 实参和形参绑定
 *
 *  使用引用避免拷贝
 *  使用引用形参返回额外信息 (也可以是指针)
 */
#if 0
    int n = 0;
    add3(n);
    cout << "n = " << n << endl;

    add2(&n);
    cout << "n = " << n << endl;

    add(n);
    cout << "n = " << n << endl;

#endif

/**
 * @brief const 形参和实参
 *
 * const形参 传递给他的变量可以是常量也可以是非常量
 */

/**
 * @brief 数组形参
 * 1.使用标记指定数组长度 eg(\0)
 * 2.使用标准库规范
 * 3.显示的传递一个表示数组大小的形参
 * 4.数组引用
 */
#if 0
    int j[5] = {1,2,3,4,5};
    print(begin(j), end(j));
#endif
/**
 * @brief initializer_list
 *
 *
 */
#if 0
    error_msg({"functionX", "expected", "actual"});
#endif
/**
 * @brief 省略符形参
 *
 */

/**
 * @brief 返回值
 * 列表初始化返回值: C++11 返回花括号包围的值的列表
 *  返回数组指针
 *  typedef int arrT[10] == using arrT = int[10]
 *  arrT * func(int i)
 * Type (*function(parameter_list))[dimension]
 * int (*func(int i))[10]
 *  使用尾置返回值类型
 *  auto func(int i) -> int(*)[10]
 *  使用decltype
 *  int odd[] = {1,3,5,7,9};
 *  int even[] = {0,2,4,6,8};
 *  decltype(odd) *arrPtr(int i) {
 *      return (i % 2) ? &odd : &even;
 *  }
 *
 */
#if 1

#endif
/**
 * @brief 函数重载
 *  1.函数名相同
 *  2.形参有区分 类型和个数 (顶层const 不相关 底层相关)
 *  3.与返回值类型不相关
 *
 */

/**
 * @brief 内联函数
 *
 */
#if 0
    string s1 = "ddd";
    string s2 = "fffff";
    cout << shorter_string(s1, s2) << endl;

#endif
    return 0;
}

/**
 * @brief
 *
 * @param s1
 * @param s2
 * @return const string&
 */
inline const string &shorter_string(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}

void error_msg(initializer_list<string> il) {
    for (auto beg = il.begin(); beg != il.end(); ++beg) {
        cout << *beg << " ";
    }
    cout << endl;
}

/**
 * @brief
 * &beg = 0x61fdf0
 * &end = 0x61fe04
 *
 * @param beg
 * @param end
 */
void print(const int *beg, const int *end)
{
    cout << "&beg = " << beg << endl;
    cout << "&end = " << end << endl;
    cout << " &end - &beg = " << end - beg << endl;
    while (beg != end) {
        cout << "1.&beg = " << beg << endl;
        cout << *beg++ << endl;
        cout << "2.&beg = " << beg << endl;
    }
}

void add(int &i) {
    i++;
}

void add2(int *i) {
    (*i)++;
}

void add3(int i) {
    i++;
}

/**
 * @brief Taking the factorial, recursive fashion
 *
 * @param val
 * @return int
 */
int fact(int val) {
    if (val == 1) {
        return 1;
    } else {
        return val * fact(val - 1);
    }
}
