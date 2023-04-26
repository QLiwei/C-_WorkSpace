/**
 * @file 01_statement.cpp
 * @brief statement
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-04-12       vector(vector_qiu@163.com)      first version
 *
 */

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <bitset> //输出二进制的头文件

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;
using std::bitset;

/**
 * @brief The application entry point.
 *
 * @return int
 */
int main() {
    /**
     * @brief 简单语句
     *  表达式语句：执行表达式并丢弃掉求值结果
     *  空语句
     *      ;   //空语句
     *  复合语句：花括号括起来的语句和声明的序列，也被称作块
     *
     */

    /**
     * @brief 语句作用域
     *  可以在if switch while for语句的控制结构内定义变量。
     * 定义在控制结构当中的变量只能在相应语句的内部可见，一旦语句结束，变量也就超出其作用范围了
     *
     *
     */

    /**
     * @brief 条件语句
     *  if (condition)
     *      statement
     *
     *  if (condition)
     *      statement
     *  else
     *      statement
     *
     *  if
     *  else if
     *  else
     */

    /**
     * @brief switch语句
     *
     */
#if 0
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, other = 0;
    char ch;
    while (cin >> ch) {
        switch (ch) {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
            default:
                ++other;
                break;
        }
    }
    cout << "Number of vowel a: \t" << aCnt << '\n'
         << "Number of vowel e: \t" << eCnt << '\n'
         << "Number of vowel i: \t" << iCnt << '\n'
         << "Number of vowel o: \t" << oCnt << '\n'
         << "Number of vowel u: \t" << uCnt << '\n'
         << "Number of vowel othor: \t" << other << '\n';
#endif
/**
 * @brief switch内部控制流
 *
 */
#if 0
    unsigned other = 0;
    char ch;
    while (cin >> ch) {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++other;
                break;
            default:
                break;
        }
    }
    cout << "Number of vowel othor: \t" << other << '\n';
#endif
/**
 * @brief 迭代语句
 * while(condition)
 *  statement
 *
 */
#if 0
    vector<int> v;
    int i;

    while (cin >> i)
        v.push_back(i);

    auto beg = v.begin();
    while (beg != v.end() && *beg >= 0)
        ++beg;
    if (beg == v.end())
        cout << "Ok " << endl;
#endif
/**
 * @brief for
 *  for (init-statemen; condition; expression)
 *      statement
 *
 * 范围for循环 序列
 *  for (declaration : expression)
 *      statement
 *
 */
#if 0
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};

    for (auto &i : v ) { // 使用引用就可以修改原始数据
        i *= 2;
    }

    for (auto i : v ) {
        cout << i << " ";
    }
#endif
/**
 * @brief do while{}
 *
 */

/**
 * @brief break
 *
 */
#if 0
    string buf;
    while (cin >> buf && !buf.empty()) {
        switch (buf[0]) {
            case '-':
                for (auto it = buf.begin() + 1; it != buf.end(); ++it) {
                    if (*it == ' ')
                        break;  // 跳出循环
                }
                break;
            case '+':
                break;
            default:
                break;
        }
    }
#endif
/**
 * @brief continue
 *
 */

/**
 * @brief goto
 *
 * lab:
 *
 *  goto lab;
 */

/**
 * @brief try
 *
 * try {
 *     program-statements
 * } catch (exception-declaration) {
 *
 * } catch () {
 *
 * } ....
 *  catch 子句包括3部分 ：关键字 catch 对象的声明
 */
    return 0;
}