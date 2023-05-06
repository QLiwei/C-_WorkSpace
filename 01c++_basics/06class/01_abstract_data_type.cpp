/**
 * @file 01_abstract_data_type.cpp
 * @brief abstract data type
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-04-26       vector(vector_qiu@163.com)      first version
 *
 */

/**
 * @brief 类
 *  基本思想:数据抽象和封装
 *      数据抽象:依赖于接口(interface)和实现(implementation)分离的编程
 *  1.this
 *      成员函数通过this的隐式参数访问当前对象,函数的对象地址初始化this
 *  2.const成员函数
 *      const的作用是修改隐式this指针的类型
 *      默认情况下,this的类型是指向类类型非常量版本的常量指针(this的地址是常量,指向的对象不是常量)
 *  3.类相关非成员函数
 *  4.构造函数
 *  5.访问控制 public private
 *  6.class struct关键字 class默认访问权限private struct默认访问权限为public
 *  7.友元:
 *      类可以允许其他类或者函数访问它的非公有成员,方法是令其他类或者函数成为为的友元
 *      friend关键字
 *  8.封装:
 *      确保用户代码不会无意间破坏封装对象的状态
 *      被封装的类的具体实现细节可以随时改变,而无须调整用户级别的代码
 *
 */