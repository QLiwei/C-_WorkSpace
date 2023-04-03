/**
 * @file 02_std_string_type.cpp
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
#if 0
    string s1;          // 默认初始化，s1是一个空串
    string s2(s1);      // s2 是 s1的副本
    string s3 = s1;     // 等价于s2(s1)
    string s4("value");
    string s5 = "value";
    string s6(10, 'c'); // 初始化为n和字符组成的串
#endif

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
#if 0
    string s;
    cin >> s;
    cout << s << endl;
#endif

    /**
     * @brief getline读取一整行
     *
     */
#if 0
    string line;
    while (getline(cin, line)) {
        cout << line << endl;
    }
#endif

    /**
     * @brief empty
     *
     */
#if 0
    string line;
    while (getline(cin, line))
    {
        if (!line.empty())
        {
            cout << line << endl;
        }
    }
#endif
/**
 * @brief size
 *
 * return size_type:
 */
#if 0
    string line;
    while (getline(cin, line))
    {
        if (line.size() > 80)
        {
            cout << line << endl;
        }
    }
#endif
/**
 * @brief 运算 == != + =
 *
 */

/**
 * @brief 处理字符串
 *  cctype headfile 处理字符
 * isalnum(c)   字母或数字
 * isalpha(c)   字母
 * iscntrl(c)   控制字符
 * isdigit(c)   数字
 * isgraph(c)   不是空格但是可以打印
 * islower(c)   小写字母
 * isprint(c)   打印字符
 * ispunct(c)   标点符号
 * isspace(c)   空白
 * isupper(c)   大写字母
 * isxdigit(c)  十六进制数字
 * tolower(c)   to小写字母
 * toupper(c)   to大写字母
 *
 * 处理字符串使用范围 for
 *  for (declaration : expression)
 *      statement
 */
#if 0
    string str("some string");

    for (auto c : str)
    {
        cout << c << endl;
    }
#endif

#if 0
    string s("Hello World!!!");

    // decltype ：()内表达式返回类型一致
    // auto ：与等号右边类型一致
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s)
    {
        if (ispunct(c)) {
            ++punct_cnt;
        }
    }
    cout << punct_cnt << " punctuation characters is " << s << endl;

#endif

#if 0
    string s("Hello World!!!");

    for (auto &c : s)
    {
        c = toupper(c); // c是一个引用，因此赋值语句将改变s中字符的值
    }
    cout << s << endl;
#endif
/**
 * @brief 处理一部分字符
 *  1.使用下标 []
 *  2.迭代器
 *
 */
#if 0
    string s("some string");

    if (!s.empty())
    {
        s[0] = toupper(s[0]);
    }
    cout << s << endl;
#endif
#if 0
    string s("some string!");
    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
    {
        s[index] = toupper(s[index]);
    }
    cout << s << endl;
#endif
#if 1
    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15"
         << " sperarated by spaces, Hit ENTER when finished: "
         << endl;

    string result;
    string::size_type n;
    while (cin >> n)
    {
        if (n < hexdigits.size())
        {
            result += hexdigits[n];
        }
    }
    cout << "Your hex number is: " << result << endl;
#endif
    return 0;
}