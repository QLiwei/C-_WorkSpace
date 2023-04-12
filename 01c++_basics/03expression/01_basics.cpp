/**
 * @file 01_basics.cpp
 * @brief expression basics
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-04-04       vector(vector_qiu@163.com)      first version
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
     * @brief
     * unary operator : & * ...
     *
     * binary operator : == * ...
     *
     * 组合运算符：
     * 运算对象转换：类型转换，自动提升
     * 重载运算符：重新实现运算符功能
     * 左值 右值：
     */

    /**
     * @brief i++
     *
     */
#if 0
    vector<unsigned> v(11, 3);
    auto pbeg = v.begin();
    while (pbeg != v.end() && *pbeg >= 0)
    {
        cout << *pbeg++ << endl;
    }
#endif
/**
 * @brief 条件运算符
 *  变量 = 表达式 ? 值: 值;
 *
 */


/**
 * @brief
 *  ~   位求反
 *  <<  左移
 *  >>  右移
 * &    位与
 * ^    位异或
 * |    位或
 *
 *  0b10;   2进制
 *  010;    8进制
 *  0x11;   10进制
 * cout << "八进制： " << oct << a << endl;
	cout << "十进制： " << dec << a << endl;
	cout << "十六进制： " << hex << a << endl;
	cout << "二进制： " << bitset<sizeof(a)*8>(a) << endl;
 */
#if 0
    unsigned char b1 = 0b01100101;
    unsigned char b2 = 0b10101111;
    unsigned char temp;
    cout << "b1:" << bitset<sizeof(b1)*8>(b1) <<endl;
    cout << "b2:" << bitset<sizeof(b2)*8>(b2) <<endl;
    temp = ~b1;
    cout << "temp = ~b1 : " << bitset<sizeof(temp)*8>(temp) <<endl;
    temp = b1 << 1;
    cout << "temp = b1 << 1 : " << bitset<sizeof(temp)*8>(temp) <<endl;
    temp = b1 >> 1;
    cout << "temp = b1 >> 1 : " << bitset<sizeof(temp)*8>(temp) <<endl;

    temp = b1 & b2;
    cout << "temp = b1 & b2 : " << bitset<sizeof(temp)*8>(temp) <<endl;
    temp = b1 | b2;
    cout << "temp = b1 | b2 : " << bitset<sizeof(temp)*8>(temp) <<endl;
    temp = b1 ^ b2;
    cout << "temp = b1 ^ b2 : " << bitset<sizeof(temp)*8>(temp) <<endl;
#endif
/**
 * @brief 逗号运算符(comma operator)
 * 含有两个运算对象，按照从左向右的顺序依次求值
 *
 */
/**
 * 隐式类型转化
 *  数组转换成指针：数组自动转化成指向数组首元素的指针
 *
*/
#if 0
    int ia[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ip = ia;
    cout << *ia << " " << *(ia+1) << endl;
    cout << *ip << " " << *(ip+1) << endl;

    cout << &ia << " " << &ia + 1 << " " << ia << " " << ia + 1 << endl;
    cout << &ip << " " << &ip + 1 << " " << ip << " " << ip + 1 << endl;
#endif
/**
 * @brief 显式转化
 *  命名的强制类型转换
 *      cast-name<type>(expression);
 *     cast-name:
 *      static_cast, dynamic_cast, const_cast, reinterpret_cast
 *     static_cast: 如任何具有明确定义的类型转换，只要不包含底层const，都可以使用static_cast.
 *      double slope = static_cast<double>(j) / i;
 *     const_cast:只能改变运算符对象的底层const
 *      cosnt char *pc;
 *      char *p = const<char*>(pc); // 常量类型转换成非常量类型，只改变变量属性
 *     reinterpret_cast:为运算对象的为模式提供较低层上的重新解释
 *      int *ip;
 *      char *pc = reinterpret_cast<char*>(ip);
 *
 *      type (expr);
 *      (type) expr;
 *
 *
 */

/**
 * @brief 运算符优先级
 *  结合律      运算符      功能            用法
 *   <-         ::          全局作用域      ::name
 *   <-         ::          类作用域        class::name
 *   <-         ::          命名空间作用域  namespace::name
 *
 *   <-         .           成员选择        object.menber
 *   <-         ->          成员选择        pointer->menber
 *   <-         []          下标            expr[expr]
 *   <-         ()          函数调用        name(expr_list)
 *   <-         ()          类型构造        type(expr_list)
 *
 *   ->         ++          后置递增运算    lvalue++
 *   ->         --          后置递减运算    lvalue--
 *   ->         typeid      类型ID          typeid(type)
 *   ->         typeid      运行时类型ID    typeid(expr)
 *   ->         explicit cast   类型转换    cast_name<type>(expr)
 *
 *   ->         ++          前置递增运算    ++lvalue;
 *   ->         --          前置递减运算    --lvalue;
 *   ->         ~           位求反          ~expr
 *   ->         !           逻辑非          !expr
 *   ->         -           一元负号        -expr
 *   ->         +           一元正号        +expr
 *   ->         *           解引用          *expr
 *   ->         &           取地址          &lvalue
 *   ->         ()          类型转换        (type)expr
 *   ->         sizeof      对象大小        sizeof expr
 *   ->         sizeof      类型大小        sizeof(type)
 *   ->         sizeof...   参数包的大小    sizeof...(name)
 *   ->         new         创建对象        new type
 *   ->         new[]       创建数组        new type[size]
 *   ->         delete      释放对象        delete expr
 *   ->         delete      释放数组        delete [] expr
 *   ->         noexcept    能否抛出异常    noexcept(expr)
 *
 *   <-         ->*         指向成员选择的指针  ptr->*ptr_to_member
 *   <-         .*          指向成员选择的指针  obj.*ptr_to_member
 *
 *   <-         *
 *   <-         /
 *   <-         %
 *
 *   <-         +
 *   <-         -
 *
 *   <-         <<          向左移位
 *   <-         >>
 *
 *   <-         <
 *   <-         <=
 *   <-         >
 *   <-         >=
 *
 *   <-         ==
 *   <-         !=
 *
 *   <-         &
 *   <-         ^
 *   <-         |
 *   <-         &&
 *   <-         ||
 *   ->         ? :
 *   ->         =
 *   ->         *= /= %= += -= <<= >>= &= |= ^=
 *   <-         throw       抛出异常
 *   ->         ,           逗号
 */
    return 0;
}