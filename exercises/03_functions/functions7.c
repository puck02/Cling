#include "unity.h"

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
