/**
 * @file 01_copy_control.cpp
 * @brief copy control
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-05-09       vector(vector_qiu@163.com)      first version
 *
 */
#include <iostream>
#include "StrVec.h"


using namespace std;

/**
 * 拷贝构造函数：构造函数的第一个参数是自身类类型的引用，且任何额外参数都有默认值
 *
 * 拷贝运算符：operator=(const )
 *
 * 析构函数：析构函数释放对象使用的资源，并销毁对象的非static数据成员
 *  在构造函数中，成员的初始化是在函数体执行之前完成的，并按照它们在类中出现的
 *  的顺序进行初始化
 *  析构函数首先执行函数体，然后销毁成员。成员按初始化的逆序销毁
 * 什么时候会调用析构函数
 *  变量在离开其作用域时被销毁
 *  当一个对象被销毁时，其成员被销毁
 *  容器被销毁时，其元素被销毁
 *  对于动态分配的对象，当对指向它的指针应用delete运算符时被销毁
 *  对于临时对象，当创建它的完整表达式结束时被销毁
 *
 *  使用=default
 *     构造、拷贝构造、拷贝运算符
 *
 *  阻止拷贝
 *      定义删除函数
 *         = delete 通知编译器，不希望定义这些成员
 *              必须出现在函数第一次声明的时候
 *      析构函数不能被删除
 *
 *      private拷贝控制
 *
 * 对象移动：
 *
 *
 */


/**
 * @brief The application entry point.
 *
 * @return int
 */
int main(int argc, char *argv[]) {
    StrVec sv = StrVec();

    for (size_t i = 0; i < 10; i++) {
        sv.push_back("test");
    }
    cout << "sv size: " << sv.size() << "sv capacity:" << sv.capacity() << endl;

    string * b = sv.begin();
    while (b != sv.end()) {
        cout << *b++ << " ";
    }

    return 0;
}
