/**
 * @file 02_string_type.cpp
 * @brief namespace using statement
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-03-30       vector(vector_qiu@163.com)      first version
 *
 */
#include <iostream>
#include <string> /* std type string headfile */

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
     * @brief 初始化string对象
     * 直接初始化
     * 拷贝初始化 (=)初始化，编译器把等号右侧的初始值拷贝到新创建的对象中去
     *
     */
    string s1;          // 默认初始化，s1是一个空串
    string s2(s1);      // s2 是 s1的副本
    string s3 = s1;     // 等价于s2(s1)
    string s4("value");
    string s5 = "value";
    string s6(10, 'c'); // 初始化为n和字符组成的串

    /**
     * @brief string对象操作
     * os << s          将s写入输出流当中，返回os
     * is >> s          将is读取字符串赋值给s，字符串以空白分割，返回is
     * getline(is, s)   从is中读取一行赋值给s，返回is
     * s.empty()        s为空返回true，否则返回false
     * s.size()         返回s中字符的个数
     * s[n]             返回s中第n个字符的引用，位置n从0计起
     * s1+s2            返回s1和s2连接后的结果
     * s1=s2            用s2的副本代替s1中原来的字符
     * s1!=s2           等性判断对字母的大小写敏感
     * <, <=, >, >=     比较
     *
     */
#if 1
    string s;
    cin >> s;
    cout << s << endl;
#endif

    return 0;
}