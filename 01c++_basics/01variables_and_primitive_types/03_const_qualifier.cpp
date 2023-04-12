/**
 * @file 03_const_qualifier.cpp
 * @brief The const qualifier
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-03-29       vector(vector_qiu@163.com)      first version
 *
 */


/**
 * @brief The application entry point.
 *
 * @return int
 */
int main() {
    /**
     * @brief const qualifier
     *  const 初始化：
     *      默认仅在文件内有效：不同文件中相互独立
     *      如果想在多个文件使用同一个，生命和定义添加extern关键字
     *
     * const 引用：
     *  const int ci = 1024；
     *  const int &rl = ci;
     *  rl = 42;        // 错误，不能修改常量引用的值
     *  int r2 = ci;    // 错误，非常量引用不能指向一个常量对象
     *
     * const 指针：
     *  const int pi = 3.14;
     *  const int *ptr = &;
     *  int *const ptr1 = &;
     *  const int *const ptr2 = &;
     * 顶层const：指针本身是一个常量
     * 底层const：指向的对像是一个常量
     *
     * 常量表达式：指值不会在改变并且在编译过程就能得到计算结果的表达式
     *
     *  constexpr变量：constexpr
     */
    return 0;
}