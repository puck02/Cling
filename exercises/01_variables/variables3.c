#include "unity.h"

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
