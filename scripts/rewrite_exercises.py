#!/usr/bin/env python3
"""Rewrite ALL exercise files with proper TODO placeholders and clear task descriptions."""

import os

BASE = '/Users/ponepuck/Library/CloudStorage/OneDrive-Personal/workSpace/Cubytes/exercises'

exercises = {}

# ============================================================
# 00_intro - 编译基础（学生需要修复语法错误）
# ============================================================

exercises['00_intro/intro1.c'] = r'''#include <stdio.h>

// TODO: 修复下面的语法错误，让程序能够编译通过
// 提示: 检查 printf 语句是否完整

int main(void) {
    printf("Hello, World!")
    return 0;
}
'''

exercises['00_intro/intro2.c'] = r'''#include <stdio.h>

// TODO: 这个程序有多个语法错误，请修复它们
// 1. 检查函数声明的括号是否配对
// 2. 检查是否缺少分号
// 3. 检查 printf 的参数格式

int main(void {
    int x = 42
    printf("The answer is: %d\n", x);

    int y = 100;
    printf("Y is: %d\n" y);

    return 0;
}
'''

# ============================================================
# 01_variables - 变量与类型
# ============================================================

exercises['01_variables/variables1.c'] = r'''#include <stdio.h>

// TODO: 声明一个整数变量 x 并赋值为 5
// 提示: 使用 int 关键字声明变量

int main(void) {
    // TODO: 在下面一行声明变量 x 并初始化为 5

    
    printf("x has the value %d\n", x);
    return 0;
}
'''

exercises['01_variables/variables2.c'] = r'''#include <stdio.h>

// TODO: 给未初始化的变量赋值
// 学习目标: 理解变量必须先初始化才能使用

int main(void) {
    int x;       // 已声明但未初始化
    int y;       // 已声明但未初始化

    // TODO: 给 x 赋值为 10，给 y 赋值为 20

    
    printf("x + y = %d\n", x + y);
    return 0;
}
'''

exercises['01_variables/variables3.c'] = r'''#include "unity.h"

// 学习目标: 理解整数除法与浮点除法的区别
// 在C语言中，两个整数相除结果仍是整数（小数部分被丢弃）
// 要得到浮点结果，至少一个操作数必须是浮点类型

// TODO: 实现函数，计算两个整数的平均值（返回浮点结果）
// 例如: calculate_average(2, 3) 应返回 2.5 而不是 2
// 提示: 想想怎样让除法产生浮点结果？
double calculate_average(int a, int b) {
    // TODO: 在这里实现
    
}

// TODO: 实现函数，将百分比转为小数
// 例如: scale_percentage(75) 应返回 0.75
// 提示: 注意 75 / 100 在整数运算中等于 0
float scale_percentage(int percentage) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_calculate_average(void) {
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 2.5, calculate_average(2, 3));
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 7.5, calculate_average(5, 10));
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 50.5, calculate_average(50, 51));
}

void test_scale_percentage(void) {
    TEST_ASSERT_FLOAT_WITHIN(0.01, 0.75, scale_percentage(75));
    TEST_ASSERT_FLOAT_WITHIN(0.01, 0.50, scale_percentage(50));
    TEST_ASSERT_FLOAT_WITHIN(0.01, 0.25, scale_percentage(25));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_calculate_average);
    RUN_TEST(test_scale_percentage);
    return UNITY_END();
}
'''

exercises['01_variables/variables4.c'] = r'''#include "unity.h"
#include <limits.h>

// 学习目标: 了解C语言各种整数类型的取值范围
// <limits.h> 中定义了各种类型的极限值常量

// TODO: 返回 char 类型的最大值
// 提示: 使用 CHAR_MAX 常量
int get_char_max(void) {
    // TODO: 在这里实现
    
}

// TODO: 返回 int 类型的最小值
// 提示: 使用 INT_MIN 常量
int get_int_min(void) {
    // TODO: 在这里实现
    
}

// TODO: 返回 long 类型的最大值
// 提示: 使用 LONG_MAX 常量
long get_long_max(void) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_char_max(void) {
    TEST_ASSERT_EQUAL_INT(CHAR_MAX, get_char_max());
}

void test_int_min(void) {
    TEST_ASSERT_EQUAL_INT(INT_MIN, get_int_min());
}

void test_long_max(void) {
    TEST_ASSERT_EQUAL_INT64(LONG_MAX, get_long_max());
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_char_max);
    RUN_TEST(test_int_min);
    RUN_TEST(test_long_max);
    return UNITY_END();
}
'''

exercises['01_variables/variables5.c'] = r'''#include "unity.h"

// 学习目标: 理解常量和类型转换
// const 声明的变量不可修改
// 强制类型转换使用 (类型名)变量

const double PI = 3.14159;

// TODO: 返回 PI 的值
// 提示: 直接返回常量 PI
double get_pi(void) {
    // TODO: 在这里实现
    
}

// TODO: 将 double 转换为 int（截断小数部分）
// 例如: double_to_int(3.14) 返回 3
// 提示: 使用强制类型转换 (int)
int double_to_int(double value) {
    // TODO: 在这里实现
    
}

// TODO: 将 int 转换为 double
// 例如: int_to_double(42) 返回 42.0
double int_to_double(int value) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_get_pi(void) {
    TEST_ASSERT_DOUBLE_WITHIN(0.00001, 3.14159, get_pi());
}

void test_double_to_int(void) {
    TEST_ASSERT_EQUAL_INT(3, double_to_int(3.14));
    TEST_ASSERT_EQUAL_INT(9, double_to_int(9.99));
    TEST_ASSERT_EQUAL_INT(-5, double_to_int(-5.7));
}

void test_int_to_double(void) {
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 42.0, int_to_double(42));
    TEST_ASSERT_DOUBLE_WITHIN(0.01, -10.0, int_to_double(-10));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_get_pi);
    RUN_TEST(test_double_to_int);
    RUN_TEST(test_int_to_double);
    return UNITY_END();
}
'''

exercises['01_variables/variables6.c'] = r'''#include "unity.h"
#include <stddef.h>

// 学习目标: 理解 sizeof 运算符
// sizeof 返回类型或变量所占的字节数
// 用法: sizeof(int)  sizeof(变量名)  sizeof(数组名)

// TODO: 返回 int 类型占用的字节数
// 提示: 使用 sizeof(int)
size_t get_int_size(void) {
    // TODO: 在这里实现
    
}

// TODO: 返回 double 类型占用的字节数
size_t get_double_size(void) {
    // TODO: 在这里实现
    
}

// TODO: 返回指针类型占用的字节数
// 提示: 使用 sizeof(void*)
size_t get_pointer_size(void) {
    // TODO: 在这里实现
    
}

// TODO: 返回一个包含10个int元素的数组占用的总字节数
// 提示: 声明 int arr[10]，然后返回 sizeof(arr)
size_t get_array_size(void) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_int_size(void) {
    TEST_ASSERT_EQUAL_size_t(sizeof(int), get_int_size());
}

void test_double_size(void) {
    TEST_ASSERT_EQUAL_size_t(sizeof(double), get_double_size());
}

void test_pointer_size(void) {
    TEST_ASSERT_EQUAL_size_t(sizeof(void*), get_pointer_size());
}

void test_array_size(void) {
    TEST_ASSERT_EQUAL_size_t(10 * sizeof(int), get_array_size());
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_int_size);
    RUN_TEST(test_double_size);
    RUN_TEST(test_pointer_size);
    RUN_TEST(test_array_size);
    return UNITY_END();
}
'''

exercises['01_variables/variables7.c'] = r'''#include "unity.h"

// 学习目标: 理解整数除法和求余运算
// 整数除法 (/) 会丢弃小数部分: 10 / 3 = 3
// 求余运算 (%) 返回余数: 10 % 3 = 1

// TODO: 返回 a 除以 b 的商（整数部分）
// 例如: integer_divide(10, 3) 返回 3
int integer_divide(int a, int b) {
    // TODO: 在这里实现
    
}

// TODO: 返回 a 除以 b 的余数
// 例如: get_remainder(10, 3) 返回 1
int get_remainder(int a, int b) {
    // TODO: 在这里实现
    
}

// TODO: 同时计算商和余数，通过指针参数返回
// 提示: *quotient = 商, *remainder = 余数
void divide_with_remainder(int a, int b, int *quotient, int *remainder) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_integer_divide(void) {
    TEST_ASSERT_EQUAL_INT(3, integer_divide(10, 3));
    TEST_ASSERT_EQUAL_INT(2, integer_divide(5, 2));
    TEST_ASSERT_EQUAL_INT(0, integer_divide(3, 5));
    TEST_ASSERT_EQUAL_INT(5, integer_divide(25, 5));
}

void test_get_remainder(void) {
    TEST_ASSERT_EQUAL_INT(1, get_remainder(10, 3));
    TEST_ASSERT_EQUAL_INT(1, get_remainder(5, 2));
    TEST_ASSERT_EQUAL_INT(3, get_remainder(3, 5));
    TEST_ASSERT_EQUAL_INT(0, get_remainder(25, 5));
}

void test_divide_with_remainder(void) {
    int q, r;
    divide_with_remainder(10, 3, &q, &r);
    TEST_ASSERT_EQUAL_INT(3, q);
    TEST_ASSERT_EQUAL_INT(1, r);

    divide_with_remainder(17, 5, &q, &r);
    TEST_ASSERT_EQUAL_INT(3, q);
    TEST_ASSERT_EQUAL_INT(2, r);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_integer_divide);
    RUN_TEST(test_get_remainder);
    RUN_TEST(test_divide_with_remainder);
    return UNITY_END();
}
'''

exercises['01_variables/variables8.c'] = r'''#include "unity.h"

// 学习目标: 综合运用类型转换进行数值计算

// TODO: 实现四舍五入函数
// 将 double 转为最接近的整数
// 例如: round_to_int(2.5) 返回 3, round_to_int(2.3) 返回 2
// 提示: 加 0.5 再强制转换为 int
int round_to_int(double value) {
    // TODO: 在这里实现
    
}

// TODO: 摄氏度转华氏度
// 公式: F = C * 9.0 / 5.0 + 32
// 注意: 必须用浮点除法，不能用整数除法
double celsius_to_fahrenheit(int celsius) {
    // TODO: 在这里实现
    
}

// TODO: 华氏度转摄氏度
// 公式: C = (F - 32) * 5.0 / 9.0
double fahrenheit_to_celsius(int fahrenheit) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_round_to_int(void) {
    TEST_ASSERT_EQUAL_INT(3, round_to_int(2.5));
    TEST_ASSERT_EQUAL_INT(4, round_to_int(3.7));
    TEST_ASSERT_EQUAL_INT(10, round_to_int(9.6));
    TEST_ASSERT_EQUAL_INT(2, round_to_int(2.3));
}

void test_celsius_to_fahrenheit(void) {
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 32.0, celsius_to_fahrenheit(0));
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 68.0, celsius_to_fahrenheit(20));
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 98.6, celsius_to_fahrenheit(37));
}

void test_fahrenheit_to_celsius(void) {
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 0.0, fahrenheit_to_celsius(32));
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 20.0, fahrenheit_to_celsius(68));
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 100.0, fahrenheit_to_celsius(212));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_round_to_int);
    RUN_TEST(test_celsius_to_fahrenheit);
    RUN_TEST(test_fahrenheit_to_celsius);
    return UNITY_END();
}
'''

# ============================================================
# 02_control_flow - 控制流
# ============================================================

exercises['02_control_flow/if1.c'] = r'''#include "unity.h"

// 学习目标: 使用 if/else if/else 进行条件判断

// TODO: 实现符号函数
// 如果 x > 0 返回 1
// 如果 x < 0 返回 -1
// 如果 x == 0 返回 0
int sign(int x) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_sign_positive(void) {
    TEST_ASSERT_EQUAL_INT(1, sign(5));
    TEST_ASSERT_EQUAL_INT(1, sign(100));
}

void test_sign_negative(void) {
    TEST_ASSERT_EQUAL_INT(-1, sign(-5));
    TEST_ASSERT_EQUAL_INT(-1, sign(-100));
}

void test_sign_zero(void) {
    TEST_ASSERT_EQUAL_INT(0, sign(0));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sign_positive);
    RUN_TEST(test_sign_negative);
    RUN_TEST(test_sign_zero);
    return UNITY_END();
}
'''

exercises['02_control_flow/if2.c'] = r'''#include "unity.h"

// 学习目标: 使用嵌套的 if/else 处理多个条件

// TODO: 返回三个数中的最大值
// 提示: 可以用嵌套 if/else，也可以用多个 else if
int max_of_three(int a, int b, int c) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_max_of_three(void) {
    TEST_ASSERT_EQUAL_INT(5, max_of_three(5, 3, 2));
    TEST_ASSERT_EQUAL_INT(10, max_of_three(3, 10, 7));
    TEST_ASSERT_EQUAL_INT(8, max_of_three(1, 2, 8));
    TEST_ASSERT_EQUAL_INT(5, max_of_three(5, 5, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_max_of_three);
    return UNITY_END();
}
'''

exercises['02_control_flow/loops1.c'] = r'''#include "unity.h"

// 学习目标: 使用 for 循环

// TODO: 计算从 1 到 n 的所有整数之和
// 例如: sum_to_n(5) = 1 + 2 + 3 + 4 + 5 = 15
// 提示: 使用 for 循环，声明一个变量累加
int sum_to_n(int n) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_to_n(void) {
    TEST_ASSERT_EQUAL_INT(15, sum_to_n(5));
    TEST_ASSERT_EQUAL_INT(55, sum_to_n(10));
    TEST_ASSERT_EQUAL_INT(1, sum_to_n(1));
    TEST_ASSERT_EQUAL_INT(0, sum_to_n(0));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_to_n);
    return UNITY_END();
}
'''

exercises['02_control_flow/loops2.c'] = r'''#include "unity.h"

// 学习目标: 使用 while 循环

// TODO: 计算 n 的阶乘 (n!)
// factorial(5) = 5 * 4 * 3 * 2 * 1 = 120
// factorial(0) = 1（特殊情况）
// 提示: 使用 while 循环，从 n 递减到 1
int factorial(int n) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_factorial(void) {
    TEST_ASSERT_EQUAL_INT(1, factorial(0));
    TEST_ASSERT_EQUAL_INT(1, factorial(1));
    TEST_ASSERT_EQUAL_INT(120, factorial(5));
    TEST_ASSERT_EQUAL_INT(24, factorial(4));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_factorial);
    return UNITY_END();
}
'''

exercises['02_control_flow/loops3.c'] = r'''#include "unity.h"

// 学习目标: 使用 for 循环遍历数组，结合 break 语句

// TODO: 统计数组中有多少个偶数
// 提示: 用 % 运算符判断偶数 (n % 2 == 0)
int count_even(int arr[], int size) {
    // TODO: 在这里实现
    
}

// TODO: 找到数组中第一个负数的索引
// 如果没有负数，返回 -1
// 提示: 找到后用 break 跳出循环
int find_first_negative(int arr[], int size) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_count_even(void) {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    TEST_ASSERT_EQUAL_INT(3, count_even(arr1, 6));

    int arr2[] = {1, 3, 5, 7};
    TEST_ASSERT_EQUAL_INT(0, count_even(arr2, 4));

    int arr3[] = {2, 4, 6, 8};
    TEST_ASSERT_EQUAL_INT(4, count_even(arr3, 4));
}

void test_find_first_negative(void) {
    int arr1[] = {1, 2, -3, 4, -5};
    TEST_ASSERT_EQUAL_INT(2, find_first_negative(arr1, 5));

    int arr2[] = {1, 2, 3, 4};
    TEST_ASSERT_EQUAL_INT(-1, find_first_negative(arr2, 4));

    int arr3[] = {-1, 2, 3};
    TEST_ASSERT_EQUAL_INT(0, find_first_negative(arr3, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_count_even);
    RUN_TEST(test_find_first_negative);
    return UNITY_END();
}
'''

exercises['02_control_flow/loops4.c'] = r'''#include "unity.h"

// 学习目标: 理解 do-while 循环
// do-while 至少执行一次循环体，然后检查条件

// TODO: 使用 do-while 循环，从 start 加到 end（包含 end）
// 例如: sum_range(1, 5) = 1+2+3+4+5 = 15
int sum_range(int start, int end) {
    // TODO: 在这里实现
    
}

// TODO: 计算一个数的各位数字之和
// 例如: sum_digits(123) = 1 + 2 + 3 = 6
// 特殊: sum_digits(0) = 0
// 提示: 用 n % 10 取最后一位，用 n / 10 去掉最后一位
// 使用 do-while 确保 0 也能正确处理
int sum_digits(int n) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_range(void) {
    TEST_ASSERT_EQUAL_INT(15, sum_range(1, 5));
    TEST_ASSERT_EQUAL_INT(39, sum_range(4, 9));
    TEST_ASSERT_EQUAL_INT(5, sum_range(5, 5));
}

void test_sum_digits(void) {
    TEST_ASSERT_EQUAL_INT(6, sum_digits(123));
    TEST_ASSERT_EQUAL_INT(10, sum_digits(1234));
    TEST_ASSERT_EQUAL_INT(1, sum_digits(1));
    TEST_ASSERT_EQUAL_INT(0, sum_digits(0));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_range);
    RUN_TEST(test_sum_digits);
    return UNITY_END();
}
'''

exercises['02_control_flow/loops5.c'] = r'''#include "unity.h"

// 学习目标: 使用 continue 语句跳过当前迭代

// TODO: 计算 1 到 n 中所有奇数的和
// 遇到偶数用 continue 跳过
// 例如: sum_odd_numbers(10) = 1+3+5+7+9 = 25
int sum_odd_numbers(int n) {
    // TODO: 在这里实现
    
}

// TODO: 统计数组中非零元素的个数
// 遇到 0 用 continue 跳过
int count_non_zero(int arr[], int size) {
    // TODO: 在这里实现
    
}

// TODO: 计算数组中所有正数的和
// 遇到负数或零用 continue 跳过
int sum_positive(int arr[], int size) {
    // TODO: 在这里实现
    
}

// TODO: 计算 1 到 n 中跳过 3 的倍数后的和
// 例如: n=10 时，跳过 3,6,9，结果 = 1+2+4+5+7+8+10 = 37
int sum_skip_multiples_of_3(int n) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_odd_numbers(void) {
    TEST_ASSERT_EQUAL_INT(25, sum_odd_numbers(10));
    TEST_ASSERT_EQUAL_INT(9, sum_odd_numbers(5));
    TEST_ASSERT_EQUAL_INT(1, sum_odd_numbers(1));
}

void test_count_non_zero(void) {
    int arr1[] = {1, 0, 2, 0, 3};
    TEST_ASSERT_EQUAL_INT(3, count_non_zero(arr1, 5));

    int arr2[] = {0, 0, 0};
    TEST_ASSERT_EQUAL_INT(0, count_non_zero(arr2, 3));
}

void test_sum_positive(void) {
    int arr[] = {1, -2, 3, -4, 5};
    TEST_ASSERT_EQUAL_INT(9, sum_positive(arr, 5));
}

void test_sum_skip_multiples_of_3(void) {
    TEST_ASSERT_EQUAL_INT(37, sum_skip_multiples_of_3(10));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_odd_numbers);
    RUN_TEST(test_count_non_zero);
    RUN_TEST(test_sum_positive);
    RUN_TEST(test_sum_skip_multiples_of_3);
    return UNITY_END();
}
'''

exercises['02_control_flow/switch1.c'] = r'''#include "unity.h"

typedef enum {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} DayOfWeek;

// 学习目标: 使用 switch 语句

// TODO: 判断是否是工作日
// 工作日 (MONDAY ~ FRIDAY) 返回 1
// 周末 (SATURDAY, SUNDAY) 返回 0
// 提示: 用 switch + case，别忘了 break 和 default
int is_weekday(DayOfWeek day) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_weekdays(void) {
    TEST_ASSERT_EQUAL_INT(1, is_weekday(MONDAY));
    TEST_ASSERT_EQUAL_INT(1, is_weekday(WEDNESDAY));
    TEST_ASSERT_EQUAL_INT(1, is_weekday(FRIDAY));
}

void test_weekend(void) {
    TEST_ASSERT_EQUAL_INT(0, is_weekday(SATURDAY));
    TEST_ASSERT_EQUAL_INT(0, is_weekday(SUNDAY));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_weekdays);
    RUN_TEST(test_weekend);
    return UNITY_END();
}
'''

# ============================================================
# 03_functions - 函数
# ============================================================

exercises['03_functions/functions1.c'] = r'''#include "unity.h"

// 学习目标: 编写第一个函数

// TODO: 实现加法函数，返回两个整数的和
int add(int a, int b) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_add(void) {
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
    TEST_ASSERT_EQUAL_INT(0, add(-1, 1));
    TEST_ASSERT_EQUAL_INT(-5, add(-2, -3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    return UNITY_END();
}
'''

exercises['03_functions/functions2.c'] = r'''#include "unity.h"

// 学习目标: 实现多个基本运算函数

// TODO: 实现减法函数
int subtract(int a, int b) {
    // TODO: 在这里实现
    
}

// TODO: 实现乘法函数
int multiply(int a, int b) {
    // TODO: 在这里实现
    
}

// TODO: 实现整数除法函数
int divide(int a, int b) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_subtract(void) {
    TEST_ASSERT_EQUAL_INT(2, subtract(5, 3));
    TEST_ASSERT_EQUAL_INT(-2, subtract(3, 5));
}

void test_multiply(void) {
    TEST_ASSERT_EQUAL_INT(15, multiply(3, 5));
    TEST_ASSERT_EQUAL_INT(0, multiply(0, 5));
}

void test_divide(void) {
    TEST_ASSERT_EQUAL_INT(5, divide(15, 3));
    TEST_ASSERT_EQUAL_INT(3, divide(10, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_subtract);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide);
    return UNITY_END();
}
'''

exercises['03_functions/functions3.c'] = r'''#include "unity.h"
#include <stdbool.h>

// 学习目标: 理解函数声明（原型）与函数定义的分离
// 函数声明告诉编译器函数的签名，定义提供实现
// 声明放在调用之前，定义可以放在文件末尾

// TODO: 在这里写 is_even 函数的声明（原型）
// 格式: bool is_even(int n);


void setUp(void) {}
void tearDown(void) {}

void test_is_even(void) {
    TEST_ASSERT_TRUE(is_even(4));
    TEST_ASSERT_FALSE(is_even(5));
    TEST_ASSERT_TRUE(is_even(0));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_is_even);
    return UNITY_END();
}

// TODO: 在这里定义 is_even 函数
// 如果 n 是偶数返回 true，否则返回 false
// 提示: 使用 % 运算符

'''

exercises['03_functions/functions4.c'] = r'''#include "unity.h"

// 学习目标: 函数中使用 if/else 返回不同的值

// TODO: 返回两个数中的较大值
int max(int a, int b) {
    // TODO: 在这里实现
    
}

// TODO: 返回两个数中的较小值
int min(int a, int b) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_max(void) {
    TEST_ASSERT_EQUAL_INT(5, max(5, 3));
    TEST_ASSERT_EQUAL_INT(10, max(8, 10));
    TEST_ASSERT_EQUAL_INT(0, max(0, -5));
}

void test_min(void) {
    TEST_ASSERT_EQUAL_INT(3, min(5, 3));
    TEST_ASSERT_EQUAL_INT(8, min(8, 10));
    TEST_ASSERT_EQUAL_INT(-5, min(0, -5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_max);
    RUN_TEST(test_min);
    return UNITY_END();
}
'''

exercises['03_functions/functions5.c'] = r'''#include "unity.h"

// 学习目标: 在函数中使用数学公式

const double PI = 3.14159;

// TODO: 计算圆的面积
// 公式: area = PI * radius * radius
double circle_area(double radius) {
    // TODO: 在这里实现
    
}

// TODO: 判断一个数是否为正数
// 正数返回 1，零或负数返回 0
int is_positive(int n) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_circle_area(void) {
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 3.14, circle_area(1.0));
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 28.27, circle_area(3.0));
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 78.54, circle_area(5.0));
}

void test_is_positive(void) {
    TEST_ASSERT_EQUAL_INT(1, is_positive(5));
    TEST_ASSERT_EQUAL_INT(0, is_positive(0));
    TEST_ASSERT_EQUAL_INT(0, is_positive(-5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_circle_area);
    RUN_TEST(test_is_positive);
    return UNITY_END();
}
'''

exercises['03_functions/functions6.c'] = r'''#include "unity.h"

// 学习目标: 理解全局变量和函数的关系

int global_counter = 0;

// TODO: 将 global_counter 加 1，并返回新的值
int increment_counter(void) {
    // TODO: 在这里实现
    
}

// TODO: 将 global_counter 重置为 0
void reset_counter(void) {
    // TODO: 在这里实现
    
}

void setUp(void) {
    reset_counter();
}

void tearDown(void) {}

void test_increment(void) {
    TEST_ASSERT_EQUAL_INT(1, increment_counter());
    TEST_ASSERT_EQUAL_INT(2, increment_counter());
    TEST_ASSERT_EQUAL_INT(3, increment_counter());
}

void test_reset(void) {
    increment_counter();
    increment_counter();
    reset_counter();
    TEST_ASSERT_EQUAL_INT(0, global_counter);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_increment);
    RUN_TEST(test_reset);
    return UNITY_END();
}
'''

exercises['03_functions/functions7.c'] = r'''#include "unity.h"

// 学习目标: 理解递归函数
// 递归 = 函数调用自己
// 关键: 1. 基础情况（终止条件） 2. 递归情况（缩小问题）

// TODO: 用递归计算斐波那契数列的第 n 项
// fib(0) = 0, fib(1) = 1
// fib(n) = fib(n-1) + fib(n-2)
int fibonacci(int n) {
    // TODO: 在这里实现
    
}

// TODO: 用递归计算 x 的 n 次方
// power(x, 0) = 1（基础情况）
// power(x, n) = x * power(x, n-1)
int power(int x, int n) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_fibonacci(void) {
    TEST_ASSERT_EQUAL_INT(0, fibonacci(0));
    TEST_ASSERT_EQUAL_INT(1, fibonacci(1));
    TEST_ASSERT_EQUAL_INT(1, fibonacci(2));
    TEST_ASSERT_EQUAL_INT(2, fibonacci(3));
    TEST_ASSERT_EQUAL_INT(5, fibonacci(5));
    TEST_ASSERT_EQUAL_INT(8, fibonacci(6));
}

void test_power(void) {
    TEST_ASSERT_EQUAL_INT(1, power(2, 0));
    TEST_ASSERT_EQUAL_INT(2, power(2, 1));
    TEST_ASSERT_EQUAL_INT(8, power(2, 3));
    TEST_ASSERT_EQUAL_INT(27, power(3, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_fibonacci);
    RUN_TEST(test_power);
    return UNITY_END();
}
'''

exercises['03_functions/functions8.c'] = r'''#include "unity.h"

// 学习目标: 更多递归练习

// TODO: 用递归计算 1 + 2 + ... + n
// 基础情况: sum_recursive(0) = 0
// 递归情况: sum_recursive(n) = n + sum_recursive(n-1)
int sum_recursive(int n) {
    // TODO: 在这里实现
    
}

// TODO: 用递归计算阶乘（与 loops2 中的循环版本对比）
// 基础情况: countdown_product(1) = 1
// 递归情况: countdown_product(n) = n * countdown_product(n-1)
int countdown_product(int n) {
    // TODO: 在这里实现
    
}

// TODO: 用递归计算一个正整数有几位数字
// 例如: count_digits(1234) = 4
// 基础情况: n < 10 时返回 1
// 递归情况: 1 + count_digits(n / 10)
int count_digits(int n) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_recursive(void) {
    TEST_ASSERT_EQUAL_INT(0, sum_recursive(0));
    TEST_ASSERT_EQUAL_INT(1, sum_recursive(1));
    TEST_ASSERT_EQUAL_INT(15, sum_recursive(5));
    TEST_ASSERT_EQUAL_INT(55, sum_recursive(10));
}

void test_countdown_product(void) {
    TEST_ASSERT_EQUAL_INT(1, countdown_product(1));
    TEST_ASSERT_EQUAL_INT(120, countdown_product(5));
    TEST_ASSERT_EQUAL_INT(24, countdown_product(4));
}

void test_count_digits(void) {
    TEST_ASSERT_EQUAL_INT(1, count_digits(5));
    TEST_ASSERT_EQUAL_INT(2, count_digits(42));
    TEST_ASSERT_EQUAL_INT(4, count_digits(1234));
    TEST_ASSERT_EQUAL_INT(5, count_digits(98765));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_recursive);
    RUN_TEST(test_countdown_product);
    RUN_TEST(test_count_digits);
    return UNITY_END();
}
'''

# ============================================================
# 04_arrays - 数组与字符串
# ============================================================

exercises['04_arrays/arrays1.c'] = r'''#include "unity.h"

// 学习目标: 遍历数组，查找最值

// TODO: 返回数组中的最大值
// 提示: 假设第一个元素是最大的，然后逐个比较
int find_max(int arr[], int size) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_find_max(void) {
    int arr1[] = {1, 5, 3, 9, 2};
    TEST_ASSERT_EQUAL_INT(9, find_max(arr1, 5));

    int arr2[] = {-5, -1, -10, -3};
    TEST_ASSERT_EQUAL_INT(-1, find_max(arr2, 4));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_find_max);
    return UNITY_END();
}
'''

exercises['04_arrays/arrays2.c'] = r'''#include "unity.h"

// 学习目标: 通过索引访问和修改数组元素

// TODO: 返回数组中指定索引的元素
// 例如: get_element({10,20,30}, 1) 返回 20
int get_element(int arr[], int index) {
    // TODO: 在这里实现
    
}

// TODO: 设置数组中指定索引的元素值
void set_element(int arr[], int index, int value) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_get_element(void) {
    int arr[] = {10, 20, 30, 40, 50};
    TEST_ASSERT_EQUAL_INT(10, get_element(arr, 0));
    TEST_ASSERT_EQUAL_INT(30, get_element(arr, 2));
    TEST_ASSERT_EQUAL_INT(50, get_element(arr, 4));
}

void test_set_element(void) {
    int arr[] = {1, 2, 3, 4, 5};
    set_element(arr, 0, 100);
    set_element(arr, 2, 200);
    TEST_ASSERT_EQUAL_INT(100, arr[0]);
    TEST_ASSERT_EQUAL_INT(200, arr[2]);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_get_element);
    RUN_TEST(test_set_element);
    return UNITY_END();
}
'''

exercises['04_arrays/arrays3.c'] = r'''#include "unity.h"

// 学习目标: 数组的求和与求平均值

// TODO: 计算数组所有元素的和
int sum_array(int arr[], int size) {
    // TODO: 在这里实现
    
}

// TODO: 计算数组元素的平均值（整数除法）
// 例如: average_array({1,2,3,4,5}, 5) = 15/5 = 3
int average_array(int arr[], int size) {
    // TODO: 在这里实现
    // 提示: 可以先调用 sum_array，再除以 size
    
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_array(void) {
    int arr1[] = {1, 2, 3, 4, 5};
    TEST_ASSERT_EQUAL_INT(15, sum_array(arr1, 5));

    int arr2[] = {10, 20, 30};
    TEST_ASSERT_EQUAL_INT(60, sum_array(arr2, 3));
}

void test_average_array(void) {
    int arr1[] = {1, 2, 3, 4, 5};
    TEST_ASSERT_EQUAL_INT(3, average_array(arr1, 5));

    int arr2[] = {10, 20, 30};
    TEST_ASSERT_EQUAL_INT(20, average_array(arr2, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_array);
    RUN_TEST(test_average_array);
    return UNITY_END();
}
'''

exercises['04_arrays/arrays4.c'] = r'''#include "unity.h"

// 学习目标: 二维数组的使用

// TODO: 获取矩阵中指定位置的元素
// matrix[row][col]
int get_matrix_element(int matrix[3][3], int row, int col) {
    // TODO: 在这里实现
    
}

// TODO: 计算 3x3 矩阵主对角线元素的和
// 主对角线: matrix[0][0] + matrix[1][1] + matrix[2][2]
int diagonal_sum(int matrix[3][3]) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_get_matrix_element(void) {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    TEST_ASSERT_EQUAL_INT(1, get_matrix_element(matrix, 0, 0));
    TEST_ASSERT_EQUAL_INT(5, get_matrix_element(matrix, 1, 1));
    TEST_ASSERT_EQUAL_INT(9, get_matrix_element(matrix, 2, 2));
    TEST_ASSERT_EQUAL_INT(6, get_matrix_element(matrix, 1, 2));
}

void test_diagonal_sum(void) {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    TEST_ASSERT_EQUAL_INT(15, diagonal_sum(matrix));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_get_matrix_element);
    RUN_TEST(test_diagonal_sum);
    return UNITY_END();
}
'''

exercises['04_arrays/strings1.c'] = r'''#include "unity.h"

// 学习目标: 理解C字符串（以 '\0' 结尾的字符数组）

// TODO: 手动计算字符串长度（不使用 strlen）
// 提示: 遍历直到遇到 '\0'
int string_length(const char *str) {
    // TODO: 在这里实现
    
}

// TODO: 返回字符串的第一个字符
char first_char(const char *str) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_string_length(void) {
    TEST_ASSERT_EQUAL_INT(5, string_length("hello"));
    TEST_ASSERT_EQUAL_INT(0, string_length(""));
    TEST_ASSERT_EQUAL_INT(13, string_length("Hello, World!"));
}

void test_first_char(void) {
    TEST_ASSERT_EQUAL_CHAR('h', first_char("hello"));
    TEST_ASSERT_EQUAL_CHAR('H', first_char("Hello"));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_string_length);
    RUN_TEST(test_first_char);
    return UNITY_END();
}
'''

exercises['04_arrays/strings2.c'] = r'''#include "unity.h"
#include <string.h>

// 学习目标: 实现字符串复制和拼接

// TODO: 手动实现字符串复制（不使用 strcpy）
// 逐字符复制 src 到 dest，包括末尾的 '\0'
void my_strcpy(char *dest, const char *src) {
    // TODO: 在这里实现
    
}

// TODO: 手动实现字符串拼接（不使用 strcat）
// 将 src 追加到 dest 的末尾
// 提示: 先找到 dest 的末尾，再从那里开始复制
void my_strcat(char *dest, const char *src) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_my_strcpy(void) {
    char dest[20];
    my_strcpy(dest, "hello");
    TEST_ASSERT_EQUAL_STRING("hello", dest);
}

void test_my_strcat(void) {
    char dest[20] = "hello";
    my_strcat(dest, " world");
    TEST_ASSERT_EQUAL_STRING("hello world", dest);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_my_strcpy);
    RUN_TEST(test_my_strcat);
    return UNITY_END();
}
'''

exercises['04_arrays/strings3.c'] = r'''#include "unity.h"
#include <string.h>

// 学习目标: 字符串比较和字符查找

// TODO: 判断两个字符串是否相同
// 逐字符比较，完全相同返回 1，否则返回 0
// 提示: 不能用 == 比较字符串，需要逐字符比较
int strings_equal(const char *str1, const char *str2) {
    // TODO: 在这里实现
    
}

// TODO: 统计字符 ch 在字符串中出现的次数
// 例如: count_char("hello", 'l') 返回 2
int count_char(const char *str, char ch) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_strings_equal(void) {
    TEST_ASSERT_EQUAL_INT(1, strings_equal("hello", "hello"));
    TEST_ASSERT_EQUAL_INT(0, strings_equal("hello", "world"));
    TEST_ASSERT_EQUAL_INT(1, strings_equal("", ""));
}

void test_count_char(void) {
    TEST_ASSERT_EQUAL_INT(2, count_char("hello", 'l'));
    TEST_ASSERT_EQUAL_INT(0, count_char("hello", 'x'));
    TEST_ASSERT_EQUAL_INT(1, count_char("hello", 'h'));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_strings_equal);
    RUN_TEST(test_count_char);
    return UNITY_END();
}
'''

exercises['04_arrays/strings4.c'] = r'''#include "unity.h"
#include <string.h>
#include <ctype.h>

// 学习目标: 字符串的原地修改

// TODO: 将字符串中所有小写字母转为大写
// 提示: 使用 toupper() 函数，需要 #include <ctype.h>
void to_uppercase(char *str) {
    // TODO: 在这里实现
    
}

// TODO: 反转字符串
// 例如: "hello" -> "olleh"
// 提示: 交换首尾字符，然后向中间移动
void reverse_string(char *str) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_to_uppercase(void) {
    char str1[] = "hello";
    to_uppercase(str1);
    TEST_ASSERT_EQUAL_STRING("HELLO", str1);

    char str2[] = "Hello World";
    to_uppercase(str2);
    TEST_ASSERT_EQUAL_STRING("HELLO WORLD", str2);
}

void test_reverse_string(void) {
    char str1[] = "hello";
    reverse_string(str1);
    TEST_ASSERT_EQUAL_STRING("olleh", str1);

    char str2[] = "abc";
    reverse_string(str2);
    TEST_ASSERT_EQUAL_STRING("cba", str2);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_to_uppercase);
    RUN_TEST(test_reverse_string);
    return UNITY_END();
}
'''

# ============================================================
# 05_pointers - 指针
# ============================================================

exercises['05_pointers/pointers1.c'] = r'''#include "unity.h"

// 学习目标: 使用指针交换两个变量的值

// TODO: 通过指针交换两个整数的值
// 提示: 需要一个临时变量 temp
void swap(int *a, int *b) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_swap(void) {
    int x = 5, y = 10;
    swap(&x, &y);
    TEST_ASSERT_EQUAL_INT(10, x);
    TEST_ASSERT_EQUAL_INT(5, y);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_swap);
    return UNITY_END();
}
'''

exercises['05_pointers/pointers2.c'] = r'''#include "unity.h"

// 学习目标: 通过指针读写变量的值

// TODO: 通过指针设置变量的值
// *ptr = value
void set_value(int *ptr, int value) {
    // TODO: 在这里实现
    
}

// TODO: 通过指针读取变量的值
// return *ptr
int get_value(int *ptr) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_set_value(void) {
    int x = 10;
    set_value(&x, 20);
    TEST_ASSERT_EQUAL_INT(20, x);
}

void test_get_value(void) {
    int x = 42;
    TEST_ASSERT_EQUAL_INT(42, get_value(&x));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_set_value);
    RUN_TEST(test_get_value);
    return UNITY_END();
}
'''

exercises['05_pointers/pointers3.c'] = r'''#include "unity.h"

// 学习目标: 指针算术 - 通过指针偏移访问数组元素

// TODO: 使用指针算术获取数组第 n 个元素
// *(ptr + n) 等同于 ptr[n]
int get_nth_element(int *ptr, int n) {
    // TODO: 在这里实现
    
}

// TODO: 使用指针算术设置数组第 n 个元素
void set_nth_element(int *ptr, int n, int value) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_get_nth_element(void) {
    int arr[] = {10, 20, 30, 40, 50};
    TEST_ASSERT_EQUAL_INT(10, get_nth_element(arr, 0));
    TEST_ASSERT_EQUAL_INT(30, get_nth_element(arr, 2));
    TEST_ASSERT_EQUAL_INT(50, get_nth_element(arr, 4));
}

void test_set_nth_element(void) {
    int arr[] = {1, 2, 3, 4, 5};
    set_nth_element(arr, 0, 100);
    set_nth_element(arr, 2, 200);
    TEST_ASSERT_EQUAL_INT(100, arr[0]);
    TEST_ASSERT_EQUAL_INT(200, arr[2]);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_get_nth_element);
    RUN_TEST(test_set_nth_element);
    return UNITY_END();
}
'''

exercises['05_pointers/pointers4.c'] = r'''#include "unity.h"

// 学习目标: 使用指针遍历数组

// TODO: 使用指针遍历数组并计算元素和
// 可以用 *(ptr + i) 或 ptr[i]
int sum_with_pointer(int *ptr, int size) {
    // TODO: 在这里实现
    
}

// TODO: 使用指针找到数组中的最小值
int find_min_with_pointer(int *ptr, int size) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_with_pointer(void) {
    int arr[] = {1, 2, 3, 4, 5};
    TEST_ASSERT_EQUAL_INT(15, sum_with_pointer(arr, 5));
}

void test_find_min_with_pointer(void) {
    int arr[] = {5, 2, 8, 1, 9};
    TEST_ASSERT_EQUAL_INT(1, find_min_with_pointer(arr, 5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_with_pointer);
    RUN_TEST(test_find_min_with_pointer);
    return UNITY_END();
}
'''

exercises['05_pointers/pointers5.c'] = r'''#include "unity.h"

// 学习目标: 使用指针反转和复制数组

// TODO: 使用指针反转数组（原地修改）
// 提示: 交换首尾元素，指针向中间移动
void reverse_array(int *arr, int size) {
    // TODO: 在这里实现
    
}

// TODO: 通过指针将 src 数组复制到 dest
void copy_array(int *dest, int *src, int size) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_reverse_array(void) {
    int arr[] = {1, 2, 3, 4, 5};
    reverse_array(arr, 5);
    TEST_ASSERT_EQUAL_INT(5, arr[0]);
    TEST_ASSERT_EQUAL_INT(4, arr[1]);
    TEST_ASSERT_EQUAL_INT(3, arr[2]);
    TEST_ASSERT_EQUAL_INT(2, arr[3]);
    TEST_ASSERT_EQUAL_INT(1, arr[4]);
}

void test_copy_array(void) {
    int src[] = {1, 2, 3, 4, 5};
    int dest[5];
    copy_array(dest, src, 5);
    for (int i = 0; i < 5; i++) {
        TEST_ASSERT_EQUAL_INT(src[i], dest[i]);
    }
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_reverse_array);
    RUN_TEST(test_copy_array);
    return UNITY_END();
}
'''

exercises['05_pointers/pointers6.c'] = r'''#include "unity.h"

// 学习目标: 通过指针参数返回多个结果

// TODO: 将 *x 和 *y 都增加 10
void increment_both(int *x, int *y) {
    // TODO: 在这里实现
    
}

// TODO: 找到数组的最小值和最大值，通过指针参数返回
// *min 存最小值, *max 存最大值
void find_min_max(int *arr, int size, int *min, int *max) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_increment_both(void) {
    int a = 5, b = 10;
    increment_both(&a, &b);
    TEST_ASSERT_EQUAL_INT(15, a);
    TEST_ASSERT_EQUAL_INT(20, b);
}

void test_find_min_max(void) {
    int arr[] = {5, 2, 8, 1, 9};
    int min, max;
    find_min_max(arr, 5, &min, &max);
    TEST_ASSERT_EQUAL_INT(1, min);
    TEST_ASSERT_EQUAL_INT(9, max);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_increment_both);
    RUN_TEST(test_find_min_max);
    return UNITY_END();
}
'''

exercises['05_pointers/pointers7.c'] = r'''#include "unity.h"

// 学习目标: 函数指针 - 将函数作为参数传递

// TODO: 实现加法函数
int add(int a, int b) {
    // TODO: 在这里实现
    
}

// TODO: 实现减法函数
int subtract(int a, int b) {
    // TODO: 在这里实现
    
}

// apply_operation 接受一个函数指针参数，调用它并返回结果
// operation 是一个指向 "接受两个int参数并返回int" 的函数指针
int apply_operation(int (*operation)(int, int), int a, int b) {
    return operation(a, b);
}

void setUp(void) {}
void tearDown(void) {}

void test_apply_operation(void) {
    TEST_ASSERT_EQUAL_INT(8, apply_operation(add, 5, 3));
    TEST_ASSERT_EQUAL_INT(2, apply_operation(subtract, 5, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_apply_operation);
    return UNITY_END();
}
'''

exercises['05_pointers/pointers8.c'] = r'''#include "unity.h"

// 学习目标: 使用函数指针实现通用排序

typedef int (*compare_func)(int, int);

// TODO: 实现比较函数 - 如果 a < b 返回 1，否则返回 0
int less_than(int a, int b) {
    // TODO: 在这里实现
    
}

// TODO: 实现比较函数 - 如果 a > b 返回 1，否则返回 0
int greater_than(int a, int b) {
    // TODO: 在这里实现
    
}

// TODO: 使用冒泡排序和比较函数对数组排序
// compare 返回 1 表示需要交换
// 提示: 两层循环，如果 compare(arr[j], arr[j+1]) 为真则交换
void sort_array(int *arr, int size, compare_func compare) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_sort_ascending(void) {
    int arr[] = {5, 2, 8, 1, 9};
    sort_array(arr, 5, less_than);
    TEST_ASSERT_EQUAL_INT(1, arr[0]);
    TEST_ASSERT_EQUAL_INT(2, arr[1]);
    TEST_ASSERT_EQUAL_INT(5, arr[2]);
    TEST_ASSERT_EQUAL_INT(8, arr[3]);
    TEST_ASSERT_EQUAL_INT(9, arr[4]);
}

void test_sort_descending(void) {
    int arr[] = {5, 2, 8, 1, 9};
    sort_array(arr, 5, greater_than);
    TEST_ASSERT_EQUAL_INT(9, arr[0]);
    TEST_ASSERT_EQUAL_INT(8, arr[1]);
    TEST_ASSERT_EQUAL_INT(5, arr[2]);
    TEST_ASSERT_EQUAL_INT(2, arr[3]);
    TEST_ASSERT_EQUAL_INT(1, arr[4]);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sort_ascending);
    RUN_TEST(test_sort_descending);
    return UNITY_END();
}
'''

exercises['05_pointers/pointers9.c'] = r'''#include "unity.h"
#include <stdlib.h>

// 学习目标: 动态分配二维数组

// TODO: 分配一个 rows x cols 的二维整数数组，所有元素初始化为 0
// 步骤:
// 1. 用 malloc 分配 rows 个 int* 指针
// 2. 对每一行，用 malloc 分配 cols 个 int
// 3. 将所有元素设为 0
int** allocate_2d_array(int rows, int cols) {
    // TODO: 在这里实现
    
}

// TODO: 释放二维数组的内存
// 步骤:
// 1. 先 free 每一行
// 2. 再 free 指针数组本身
void free_2d_array(int **arr, int rows) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_allocate_and_free_2d_array(void) {
    int **arr = allocate_2d_array(3, 4);
    TEST_ASSERT_NOT_NULL(arr);

    arr[0][0] = 1;
    arr[2][3] = 99;
    TEST_ASSERT_EQUAL_INT(1, arr[0][0]);
    TEST_ASSERT_EQUAL_INT(99, arr[2][3]);

    free_2d_array(arr, 3);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_allocate_and_free_2d_array);
    return UNITY_END();
}
'''

exercises['05_pointers/pointers10.c'] = r'''#include "unity.h"
#include <stdlib.h>

// 学习目标: NULL 指针的安全处理

// TODO: 安全解引用指针
// 如果 ptr 是 NULL，返回 default_value
// 否则返回 *ptr
int safe_dereference(int *ptr, int default_value) {
    // TODO: 在这里实现
    
}

// TODO: 在数组中查找目标值
// 找到返回指向该元素的指针，没找到返回 NULL
int* find_element(int *arr, int size, int target) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_safe_dereference(void) {
    int value = 42;
    TEST_ASSERT_EQUAL_INT(42, safe_dereference(&value, 0));
    TEST_ASSERT_EQUAL_INT(99, safe_dereference(NULL, 99));
}

void test_find_element(void) {
    int arr[] = {1, 2, 3, 4, 5};

    int *ptr = find_element(arr, 5, 3);
    TEST_ASSERT_NOT_NULL(ptr);
    TEST_ASSERT_EQUAL_INT(3, *ptr);

    ptr = find_element(arr, 5, 10);
    TEST_ASSERT_NULL(ptr);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_safe_dereference);
    RUN_TEST(test_find_element);
    return UNITY_END();
}
'''

exercises['05_pointers/pointers11.c'] = r'''#include "unity.h"

// 学习目标: 深入理解指针与数组的等价性
// arr[i] 等价于 *(arr + i)

// TODO: 使用指针解引用语法 *(arr + index) 访问元素
int get_by_pointer(int *arr, int index) {
    // TODO: 在这里实现
    
}

// TODO: 使用数组下标语法 ptr[index] 访问元素
int get_by_bracket(int *ptr, int index) {
    // TODO: 在这里实现
    
}

// TODO: 验证两种访问方式得到相同结果
// 如果 arr[index] == *(arr + index) 返回 1，否则返回 0
int verify_equivalence(int *arr, int index) {
    // TODO: 在这里实现
    
}

// TODO: 只使用指针算术（不用下标）遍历数组求和
// 提示: 用 int *p = arr; p < arr + size; p++
int sum_by_pointer(int *arr, int size) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_get_by_pointer(void) {
    int arr[] = {10, 20, 30, 40};
    TEST_ASSERT_EQUAL_INT(10, get_by_pointer(arr, 0));
    TEST_ASSERT_EQUAL_INT(30, get_by_pointer(arr, 2));
}

void test_get_by_bracket(void) {
    int arr[] = {10, 20, 30, 40};
    TEST_ASSERT_EQUAL_INT(20, get_by_bracket(arr, 1));
    TEST_ASSERT_EQUAL_INT(40, get_by_bracket(arr, 3));
}

void test_verify_equivalence(void) {
    int arr[] = {5, 15, 25, 35};
    TEST_ASSERT_EQUAL_INT(1, verify_equivalence(arr, 0));
    TEST_ASSERT_EQUAL_INT(1, verify_equivalence(arr, 2));
}

void test_sum_by_pointer(void) {
    int arr[] = {1, 2, 3, 4, 5};
    TEST_ASSERT_EQUAL_INT(15, sum_by_pointer(arr, 5));

    int arr2[] = {10, 20, 30};
    TEST_ASSERT_EQUAL_INT(60, sum_by_pointer(arr2, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_get_by_pointer);
    RUN_TEST(test_get_by_bracket);
    RUN_TEST(test_verify_equivalence);
    RUN_TEST(test_sum_by_pointer);
    return UNITY_END();
}
'''

# ============================================================
# 06_structs - 结构体与内存
# ============================================================

exercises['06_structs/structs1.c'] = r'''#include "unity.h"

// 学习目标: 定义结构体和创建结构体实例

// TODO: 定义一个 Point 结构体，包含两个 int 成员: x 和 y
// 格式: typedef struct { ... } Point;


// TODO: 创建并返回一个 Point
// 设置 p.x = x, p.y = y，然后返回 p
Point create_point(int x, int y) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_create_point(void) {
    Point p = create_point(3, 4);
    TEST_ASSERT_EQUAL_INT(3, p.x);
    TEST_ASSERT_EQUAL_INT(4, p.y);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_create_point);
    return UNITY_END();
}
'''

exercises['06_structs/structs2.c'] = r'''#include "unity.h"
#include <stdlib.h>

// 学习目标: 通过指针访问结构体成员 (->)

typedef struct {
    int x;
    int y;
} Point;

// TODO: 创建并返回一个 Point
Point create_point(int x, int y) {
    // TODO: 在这里实现
    
}

// TODO: 计算两个点之间的曼哈顿距离
// 曼哈顿距离 = |x1-x2| + |y1-y2|
// 注意: 参数是指针，用 p1->x 访问成员
// 提示: 绝对值可以用 if 或三元运算符实现
int manhattan_distance(Point *p1, Point *p2) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_create_point(void) {
    Point p = create_point(3, 4);
    TEST_ASSERT_EQUAL_INT(3, p.x);
    TEST_ASSERT_EQUAL_INT(4, p.y);
}

void test_manhattan_distance(void) {
    Point p1 = {0, 0};
    Point p2 = {3, 4};
    TEST_ASSERT_EQUAL_INT(7, manhattan_distance(&p1, &p2));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_create_point);
    RUN_TEST(test_manhattan_distance);
    return UNITY_END();
}
'''

exercises['06_structs/structs3.c'] = r'''#include "unity.h"
#include <string.h>
#include <stdlib.h>

// 学习目标: 嵌套结构体

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point top_left;
    Point bottom_right;
} Rectangle;

Rectangle create_rectangle(int x1, int y1, int x2, int y2) {
    Rectangle rect = {{x1, y1}, {x2, y2}};
    return rect;
}

// TODO: 计算矩形的面积
// 面积 = 宽 * 高
// 宽 = |bottom_right.x - top_left.x|
// 高 = |bottom_right.y - top_left.y|
int rectangle_area(Rectangle *rect) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_create_rectangle(void) {
    Rectangle rect = create_rectangle(0, 0, 5, 3);
    TEST_ASSERT_EQUAL_INT(0, rect.top_left.x);
    TEST_ASSERT_EQUAL_INT(0, rect.top_left.y);
    TEST_ASSERT_EQUAL_INT(5, rect.bottom_right.x);
    TEST_ASSERT_EQUAL_INT(3, rect.bottom_right.y);
}

void test_rectangle_area(void) {
    Rectangle rect = {{0, 0}, {5, 3}};
    TEST_ASSERT_EQUAL_INT(15, rectangle_area(&rect));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_create_rectangle);
    RUN_TEST(test_rectangle_area);
    return UNITY_END();
}
'''

exercises['06_structs/structs4.c'] = r'''#include "unity.h"
#include <string.h>

// 学习目标: 结构体中使用字符串

typedef struct {
    char name[50];
    int age;
    double score;
} Student;

// TODO: 创建并返回一个 Student 结构体
// 提示: 用 strcpy 复制字符串到 s.name
Student create_student(const char *name, int age, double score) {
    // TODO: 在这里实现
    
}

// TODO: 判断学生是否及格（分数 >= 60 为及格）
// 及格返回 1，不及格返回 0
// 注意: 参数是指针，用 s->score 访问
int is_passing(Student *s) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_create_student(void) {
    Student s = create_student("Alice", 20, 85.5);
    TEST_ASSERT_EQUAL_STRING("Alice", s.name);
    TEST_ASSERT_EQUAL_INT(20, s.age);
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 85.5, s.score);
}

void test_is_passing(void) {
    Student s1 = create_student("Bob", 19, 75.0);
    Student s2 = create_student("Charlie", 21, 55.0);
    TEST_ASSERT_TRUE(is_passing(&s1));
    TEST_ASSERT_FALSE(is_passing(&s2));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_create_student);
    RUN_TEST(test_is_passing);
    return UNITY_END();
}
'''

exercises['06_structs/memory1.c'] = r'''#include "unity.h"
#include <stdlib.h>

// 学习目标: malloc 和 free 基本用法
// malloc(size) 分配 size 字节的内存，返回指针
// free(ptr) 释放之前分配的内存

// TODO: 动态分配一个 size 个 int 元素的数组
// 提示: (int *)malloc(size * sizeof(int))
int* allocate_array(int size) {
    // TODO: 在这里实现
    
}

// TODO: 释放动态分配的数组
// 提示: 调用 free(arr)
void free_array(int *arr) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_allocate_and_free(void) {
    int *arr = allocate_array(5);
    TEST_ASSERT_NOT_NULL(arr);

    arr[0] = 10;
    arr[4] = 50;
    TEST_ASSERT_EQUAL_INT(10, arr[0]);
    TEST_ASSERT_EQUAL_INT(50, arr[4]);

    free_array(arr);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_allocate_and_free);
    return UNITY_END();
}
'''

exercises['06_structs/memory2.c'] = r'''#include "unity.h"
#include <stdlib.h>
#include <string.h>

// 学习目标: calloc（自动初始化为0）和字符串的动态复制

// TODO: 使用 calloc 分配 size 个 int 元素的数组
// calloc 会自动将内存初始化为 0
// 格式: (int *)calloc(size, sizeof(int))
int* allocate_zero_array(int size) {
    // TODO: 在这里实现
    
}

// TODO: 动态复制字符串
// 步骤: 1. malloc(strlen(str) + 1) 分配空间
//       2. strcpy 复制内容
//       3. 返回新字符串指针
char* duplicate_string(const char *str) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_allocate_zero_array(void) {
    int *arr = allocate_zero_array(5);
    TEST_ASSERT_NOT_NULL(arr);

    for (int i = 0; i < 5; i++) {
        TEST_ASSERT_EQUAL_INT(0, arr[i]);
    }

    free(arr);
}

void test_duplicate_string(void) {
    char *str = duplicate_string("hello");
    TEST_ASSERT_NOT_NULL(str);
    TEST_ASSERT_EQUAL_STRING("hello", str);
    free(str);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_allocate_zero_array);
    RUN_TEST(test_duplicate_string);
    return UNITY_END();
}
'''

exercises['06_structs/memory3.c'] = r'''#include "unity.h"
#include <stdlib.h>
#include <string.h>

// 学习目标: realloc - 调整已分配内存的大小
// realloc(ptr, new_size) 会保留原有数据

// TODO: 调整数组大小
// 提示: (int *)realloc(arr, new_size * sizeof(int))
int* resize_array(int *arr, int old_size, int new_size) {
    (void)old_size;  // 这个参数在这里未使用
    // TODO: 在这里实现
    
}

// TODO: 调整字符串缓冲区大小
char* resize_string(char *str, int new_size) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_resize_array(void) {
    int *arr = (int *)malloc(3 * sizeof(int));
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    arr = resize_array(arr, 3, 5);
    TEST_ASSERT_NOT_NULL(arr);

    TEST_ASSERT_EQUAL_INT(1, arr[0]);
    TEST_ASSERT_EQUAL_INT(2, arr[1]);
    TEST_ASSERT_EQUAL_INT(3, arr[2]);

    arr[3] = 4;
    arr[4] = 5;
    TEST_ASSERT_EQUAL_INT(4, arr[3]);
    TEST_ASSERT_EQUAL_INT(5, arr[4]);

    free(arr);
}

void test_resize_string(void) {
    char *str = (char *)malloc(5 * sizeof(char));
    strcpy(str, "test");

    str = resize_string(str, 10);
    TEST_ASSERT_NOT_NULL(str);
    TEST_ASSERT_EQUAL_STRING("test", str);

    strcat(str, " data");
    TEST_ASSERT_EQUAL_STRING("test data", str);

    free(str);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_resize_array);
    RUN_TEST(test_resize_string);
    return UNITY_END();
}
'''

exercises['06_structs/memory4.c'] = r'''#include "unity.h"
#include <stdlib.h>
#include <string.h>

// 学习目标: 实现自动扩容的动态字符串

typedef struct {
    char *data;      // 字符缓冲区
    int size;        // 已使用的字符数
    int capacity;    // 缓冲区总容量
} DynamicString;

DynamicString* create_dynamic_string(void) {
    DynamicString *ds = (DynamicString *)malloc(sizeof(DynamicString));
    ds->capacity = 8;
    ds->size = 0;
    ds->data = (char *)malloc(ds->capacity);
    return ds;
}

// TODO: 向动态字符串追加一个字符
// 如果 size >= capacity，需要先扩容（容量翻倍）
// 扩容: ds->data = realloc(ds->data, ds->capacity)
// 然后: ds->data[ds->size++] = c
void append_char(DynamicString *ds, char c) {
    // TODO: 在这里实现
    
}

// TODO: 释放动态字符串的所有内存
// 步骤: 1. free(ds->data)  2. free(ds)
void free_dynamic_string(DynamicString *ds) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_create_dynamic_string(void) {
    DynamicString *ds = create_dynamic_string();
    TEST_ASSERT_NOT_NULL(ds);
    TEST_ASSERT_NOT_NULL(ds->data);
    TEST_ASSERT_EQUAL_INT(0, ds->size);
    TEST_ASSERT_EQUAL_INT(8, ds->capacity);
    free_dynamic_string(ds);
}

void test_append_char(void) {
    DynamicString *ds = create_dynamic_string();

    append_char(ds, 'h');
    append_char(ds, 'e');
    append_char(ds, 'l');
    append_char(ds, 'l');
    append_char(ds, 'o');

    TEST_ASSERT_EQUAL_INT(5, ds->size);
    TEST_ASSERT_EQUAL_CHAR('h', ds->data[0]);
    TEST_ASSERT_EQUAL_CHAR('o', ds->data[4]);

    free_dynamic_string(ds);
}

void test_auto_expand(void) {
    DynamicString *ds = create_dynamic_string();

    for (int i = 0; i < 20; i++) {
        append_char(ds, 'a');
    }

    TEST_ASSERT_EQUAL_INT(20, ds->size);
    TEST_ASSERT_TRUE(ds->capacity >= 20);

    free_dynamic_string(ds);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_create_dynamic_string);
    RUN_TEST(test_append_char);
    RUN_TEST(test_auto_expand);
    return UNITY_END();
}
'''

# ============================================================
# 07_file_io - 文件操作
# ============================================================

exercises['07_file_io/file1.c'] = r'''#include "unity.h"
#include <stdio.h>
#include <string.h>

// 学习目标: 文件的基本读写
// fopen 打开文件, fclose 关闭文件
// fputs 写入字符串, fgets 读取一行

// TODO: 将字符串写入文件
// 步骤: 1. fopen(filename, "w") 以写模式打开
//       2. 检查是否打开成功（返回 NULL 表示失败）
//       3. fputs(content, file) 写入内容
//       4. fclose(file) 关闭文件
//       5. 返回 1 表示成功，0 表示失败
int write_to_file(const char *filename, const char *content) {
    // TODO: 在这里实现
    
}

// TODO: 从文件读取一行
// 步骤: 1. fopen(filename, "r") 以读模式打开
//       2. fgets(buffer, size, file) 读取一行
//       3. 移除末尾换行符（如果有）
//       4. fclose 关闭, 返回 1 成功 / 0 失败
int read_from_file(const char *filename, char *buffer, int size) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_write_and_read(void) {
    const char *filename = "test_file1.txt";
    const char *content = "Hello, File I/O!";

    int write_result = write_to_file(filename, content);
    TEST_ASSERT_EQUAL_INT(1, write_result);

    char buffer[100];
    int read_result = read_from_file(filename, buffer, 100);
    TEST_ASSERT_EQUAL_INT(1, read_result);
    TEST_ASSERT_EQUAL_STRING(content, buffer);

    remove(filename);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_write_and_read);
    return UNITY_END();
}
'''

exercises['07_file_io/file2.c'] = r'''#include "unity.h"
#include <stdio.h>

// 学习目标: 格式化文件读写
// fprintf 格式化写入, fscanf 格式化读取

// TODO: 将学生数据格式化写入文件
// 每个字段一行: name, age, score
// 使用 fprintf(file, "%s\n", name) 等
int write_student_data(const char *filename, const char *name, int age, double score) {
    // TODO: 在这里实现
    
}

// TODO: 从文件读取学生数据
// 使用 fscanf(file, "%s", name) 等
int read_student_data(const char *filename, char *name, int *age, double *score) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_write_and_read_formatted(void) {
    const char *filename = "test_file2.txt";

    int write_result = write_student_data(filename, "Alice", 20, 85.5);
    TEST_ASSERT_EQUAL_INT(1, write_result);

    char name[50];
    int age;
    double score;
    int read_result = read_student_data(filename, name, &age, &score);
    TEST_ASSERT_EQUAL_INT(1, read_result);
    TEST_ASSERT_EQUAL_STRING("Alice", name);
    TEST_ASSERT_EQUAL_INT(20, age);
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 85.5, score);

    remove(filename);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_write_and_read_formatted);
    return UNITY_END();
}
'''

exercises['07_file_io/file3.c'] = r'''#include "unity.h"
#include <stdio.h>
#include <string.h>

// 学习目标: 二进制文件读写
// fwrite 写入二进制数据, fread 读取二进制数据

// TODO: 将整数数组以二进制格式写入文件
// 步骤: 1. fopen(filename, "wb") 以二进制写模式打开
//       2. fwrite(arr, sizeof(int), size, file) 写入
//       3. fclose, 返回 1 成功 / 0 失败
int write_binary_array(const char *filename, int *arr, int size) {
    // TODO: 在这里实现
    
}

// TODO: 从二进制文件读取整数数组
// 使用 fread(arr, sizeof(int), size, file)
int read_binary_array(const char *filename, int *arr, int size) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_binary_io(void) {
    const char *filename = "test_file3.bin";
    int write_arr[] = {1, 2, 3, 4, 5};
    int read_arr[5];

    int write_result = write_binary_array(filename, write_arr, 5);
    TEST_ASSERT_EQUAL_INT(1, write_result);

    int read_result = read_binary_array(filename, read_arr, 5);
    TEST_ASSERT_EQUAL_INT(1, read_result);

    for (int i = 0; i < 5; i++) {
        TEST_ASSERT_EQUAL_INT(write_arr[i], read_arr[i]);
    }

    remove(filename);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_binary_io);
    return UNITY_END();
}
'''

exercises['07_file_io/file4.c'] = r'''#include "unity.h"
#include <stdio.h>
#include <string.h>

// 学习目标: 逐行读取和文件复制

// TODO: 统计文件的行数
// 提示: 用 fgets 循环读取，每读一行计数加1
int count_lines(const char *filename) {
    // TODO: 在这里实现
    
}

// TODO: 复制文件内容
// 从 src 逐字符读取 (fgetc)，写入 dest (fputc)
// 循环直到 fgetc 返回 EOF
int copy_file(const char *src, const char *dest) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_count_lines(void) {
    const char *filename = "test_file4.txt";

    FILE *file = fopen(filename, "w");
    fprintf(file, "line1\n");
    fprintf(file, "line2\n");
    fprintf(file, "line3\n");
    fclose(file);

    int lines = count_lines(filename);
    TEST_ASSERT_EQUAL_INT(3, lines);

    remove(filename);
}

void test_copy_file(void) {
    const char *src = "test_src.txt";
    const char *dest = "test_dest.txt";

    FILE *file = fopen(src, "w");
    fprintf(file, "Hello, World!");
    fclose(file);

    int result = copy_file(src, dest);
    TEST_ASSERT_EQUAL_INT(1, result);

    char buffer[100];
    file = fopen(dest, "r");
    fgets(buffer, 100, file);
    fclose(file);
    TEST_ASSERT_EQUAL_STRING("Hello, World!", buffer);

    remove(src);
    remove(dest);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_count_lines);
    RUN_TEST(test_copy_file);
    return UNITY_END();
}
'''

# ============================================================
# Write all files
# ============================================================

count = 0
for rel_path, content in exercises.items():
    filepath = os.path.join(BASE, rel_path)
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write(content.lstrip('\n'))
    count += 1
    print(f'OK {rel_path}')

print(f'\nRewrote {count} exercise files')
