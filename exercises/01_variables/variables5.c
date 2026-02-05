#include "unity.h"

// TODO: 实现这些函数

// 定义一个常量PI，值为3.14159
// 提示：使用const关键字

double get_pi(void) {
    // 返回PI常量
    return 0.0;
}

// 将double转换为int（丢弃小数部分）
int double_to_int(double value) {
    // TODO: 使用显式类型转换
    return 0;
}

// 将int转换为double
double int_to_double(int value) {
    // TODO: 隐式或显式转换都可以
    return 0.0;
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
