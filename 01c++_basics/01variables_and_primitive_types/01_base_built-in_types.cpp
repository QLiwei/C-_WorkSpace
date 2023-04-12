/**
 * @file 01_base_built-in_types.cpp
 * @brief Base built-in types
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
     * @brief 算术类型(arithmetic type)和空类型(void)
     *  算术类型(arithmetic type):
     *      类型            含义                最小尺寸
     *      bool            布尔类型            未定义          true/false
     *      char            字符                8bits
     *      wchar_t         宽字符              16bits
     *      char16_t        Unicode字符         16bits
     *      char32_t        Unicode字符         32bits
     *      short           短整型              16bits
     *      int             整型                16bits
     *      long            长整型              32bits
     *      long long       长整型              64bits
     *      float           单精度浮点类型      6bits有效数字
     *      double          双精度浮点类型      10bits有效数字
     *      long double     扩展精度浮点数      10bits有效数字
     *
     *  带符号(signed)
     *  无符号(unsigned)
     *
     *  类型转化：
     *
     *  算术表达式中既有无符号变量又有有符号变量会转化为无符号数
     *  eg.
     *  unsigned u = 10;
     *  int i = -42;
     *  i + i
     *  i + u
     *
     * 字面量常量：
     *  整型和浮点型：
     *  20      024(8进制)    0x14(16进制)
     *
     *  3.14    3.14E0  0.  0e0     .001
     *  字符和字符串
     *  'a'
     *  "Hello World"
     * 转义序列：
     *
     *
     */
    return 0;
}