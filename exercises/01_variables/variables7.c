#include "unity.h"

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
