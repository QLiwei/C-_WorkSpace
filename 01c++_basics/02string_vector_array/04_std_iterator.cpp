/**
 * @file 04_std_iterator.cpp
 * @brief standard library iterator
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-03-30       vector(vector_qiu@163.com)      first version
 *
 */
#include <iostream>
#include <vector>
#include <string>

using std::vector;
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
     * @brief 所有标准库容器都可以使用迭代器，但是其中只有少数几种才同时支持下标运算符
     * begin成员：表示的一个元素
     * end成员：尾元素的下一个位置，该迭代器指示的是容器的一个本不存在的“尾后（off the end）”元素
     *          表示我们处理完了容器中的所有元素，end成员返回的迭代器被称为尾后迭代器（off-the-end iterator)
     * 运算符：
     *  *iter               返回迭代器iter所指元素的引用
     *  iter->mem           解引用iter并获取该元素的名为mem的成员 (*iter).mem
     *  ++iter              令iter指示容器中的下一个元素
     *  --iter              令iter指示容器中的上一个元素
     *  iter1 == iter2      判断两个迭代器是否相等（不等于），如果两个迭代器指示的是同一个元素
     *  iter1 != iter2      或者他们是同一个容器的尾后迭代器，则相等；反之，不相等
     *
     */
#if 0
    string s("some string");
    if (s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s << endl;
#endif

#if 0
    string s("some string");
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
    {
        *it = toupper(*it);
    }
    cout << s << endl;
#endif
/**
 * @brief 泛型编程
 *  for循环中使用!=而非<进行判断，C++习惯性地使用!=，其原因和他们更愿意使用迭代器而非下标的
 * 原因一样：因为这种编程风格在标准库提供的所有容器都有效。
 */

/**
 * @brief 迭代器类型
 *  迭代器的标准库类型使用iterator和const_iterator来表示迭代器的类型
 *
 * 迭代器和迭代器类型
 *  迭代器这个名词有三种不同的含义：可能是迭代器概念本身，也可能是指容器定义的迭代器类型
 * 还可能是指某个迭代器对象。
 *  我们认定某个类型是迭代器当且仅当它支持一套操作，能够访问容器的元素或者从某个元素移动到另一个元素
 * 每个容器类定义了一个名为iterator的类型，该类型支持迭代器概念所规定的一套操作
 */
#if 0
    vector<int>::iterator it;           //rw
    string::iterator it2;               //rw

    vector<int>::const_iterator it3;    //只能读元素，不能写数据
    string::const_iterator it4;         //只能读字符，不能写字符
#endif
/**
 * @brief begin end运算符
 * 返回的具体类型有对象是否是常量决定
 *
 */
#if 0
    vector<int> v;
    const vector<int> cv;
    auto it1 = v.begin();   // vector<int>::iterator
    auto it2 = cv.begin(); //vector<int>::const_iterator
#endif
/**
 * @brief cbegin cend
 * 返回值const_iterator
 *
 */

/**
 * @brief 解引用和成员访问操作
 * vector<int> v;
 * auto it = v.begin();
 * (*it).empty()
 * it->empty()
 *
 */
/*
    for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it)
    {
        cout << *it << endl;
    }
*/

/**
 * @brief vector对象的一些操作会是迭代器失效
 *  vector对象可以动态地增长，但是也会有一些副作用。
 * 1.for循环中向vector对象添加元素
 * 2.任何一种可能改变vector对象容量的操作，比如push_back
 *
 */

/**
 * @brief 迭代器运算
 * string vector迭代器支持的运算
 * iter + n
 * iter - n
 * iter += n
 * iter -= n
 *
 * iter1 - iter2    两个迭代器相减的结果是他们之间的距离
 * > >= < <=        迭代器的位置比较
 *
 */
#if 1
    vector<string> text{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k"};
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg) / 2;
    string sought = "c";
    while (mid != end && *mid != sought)
    {
        if (sought < *mid)
        {
            end = mid;
        }
        else
        {
            beg = mid + 1;
        }
        mid = beg + (end - beg) / 2;
    }
    cout << *mid << endl;

#endif
    return 0;
}