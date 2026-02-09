#include "unity.h"

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
