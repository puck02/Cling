#include "unity.h"

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
