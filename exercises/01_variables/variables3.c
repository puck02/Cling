#include "unity.h"

// 学习目标：理解类型转换和精度损失
// 在 C 语言中，不同类型之间的转换可能导致数据丢失

// TODO: 修复以下函数中的类型转换问题
// 提示：注意整数除法和浮点数转换

double calculate_average(int a, int b) {
    // 当前代码：整数除法会丢失小数部分
    // 例如：5 / 2 = 2（不是 2.5）
    return (a + b) / 2;
}

float scale_percentage(int percentage) {
    // 当前代码：整数除法导致结果总是 0
    // 例如：75 / 100 = 0（不是 0.75）
    return percentage / 100;
}

// 测试用例
void setUp(void) {}
void tearDown(void) {}

void test_calculate_average(void) {
    // 测试平均值计算
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 2.5, calculate_average(2, 3));
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 7.5, calculate_average(5, 10));
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 50.5, calculate_average(50, 51));
}

void test_scale_percentage(void) {
    // 测试百分比转换
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
