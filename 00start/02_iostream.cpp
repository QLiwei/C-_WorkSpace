/**
 * @file 02_iostream.cpp
 * @brief iostream
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-03-27       vector(vector_qiu@163.com)      first version
 *
 */
/* header  */
#include <iostream>

/*
    编译C++程序的时候一定是用到了C++的库，所以用gcc编译时候，既有cpp文件又有c文件时候需要加上-lstdc++。
    -l 后面加的是动态库libstdc++.-l加的时候，把"lib"三个字符省略
    例如链接libtest.so你就需要加 -ltest ,一般这个库在usr/lib下可以找到
    gcc xxx.cpp -lstdc++ -o xxx

    命名空间(namespace): 标志库的命名空间 std::
*/

/**
 * @brief The application entry point.
 *
 * @return int
 */
int main() {
    /**
     * @brief << 输出运算符
     *      左侧的运算对象必须是一个ostream对象
     *      右侧的运算对象是要打印的值
     */
    std::cout << "Enter two number:" << std::endl;
    int v1 = 0, v2 = 0;
    /* >> 输入运算符 */
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}
