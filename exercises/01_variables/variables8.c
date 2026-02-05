#include "unity.h"

// 学习目标：类型转换进阶 - 四舍五入和温度转换
// 学习如何处理更复杂的类型转换场景

// TODO: 实现四舍五入函数
// 将浮点数四舍五入转换为整数
int round_to_int(double value) {
    return 0;
}

// TODO: 实现温度转换：摄氏到华氏
// 公式：F = C * 9/5 + 32
double celsius_to_fahrenheit(int celsius) {
    return 0.0;
}

// TODO: 实现温度转换：华氏到摄氏
// 公式：C = (F - 32) * 5/9
double fahrenheit_to_celsius(int fahrenheit) {
    return 0.0;
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
