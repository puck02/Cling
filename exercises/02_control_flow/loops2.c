#include "unity.h"

// 学习目标: 使用 while 循环

// TODO: 计算 n 的阶乘 (n!)
// factorial(5) = 5 * 4 * 3 * 2 * 1 = 120
// factorial(0) = 1（特殊情况）
// 提示: 使用 while 循环，从 n 递减到 1
int factorial(int n) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_factorial(void) {
    TEST_ASSERT_EQUAL_INT(1, factorial(0));
    TEST_ASSERT_EQUAL_INT(1, factorial(1));
    TEST_ASSERT_EQUAL_INT(120, factorial(5));
    TEST_ASSERT_EQUAL_INT(24, factorial(4));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_factorial);
    return UNITY_END();
}
