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

#include <iostream>

/*
    编译C++程序的时候一定是用到了C++的库，所以用gcc编译时候，既有cpp文件又有c文件时候需要加上-lstdc++。
    -l 后面加的是动态库libstdc++.-l加的时候，把"lib"三个字符省略
    例如链接libtest.so你就需要加 -ltest ,一般这个库在usr/lib下可以找到
    gcc xxx.cpp -lstdc++ -o xxx
*/

/**
 * @brief The application entry point.
 *
 * @return int
 */
int main() {
    std::cout << "Enter two number:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}
