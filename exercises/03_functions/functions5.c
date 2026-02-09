#include "unity.h"

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
