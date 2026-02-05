#include "unity.h"

double calculate_average(int a, int b) {
    // 解决方案：将其中一个操作数转换为 double
    // 这样整个表达式就会使用浮点运算
    return (a + b) / 2.0;
}

float scale_percentage(int percentage) {
    // 解决方案：确保除法使用浮点运算
    return percentage / 100.0f;
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
