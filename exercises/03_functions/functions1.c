#include "unity.h"

// 学习目标: 编写第一个函数

// TODO: 实现加法函数，返回两个整数的和
int add(int a, int b) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_add(void) {
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
    TEST_ASSERT_EQUAL_INT(0, add(-1, 1));
    TEST_ASSERT_EQUAL_INT(-5, add(-2, -3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    return UNITY_END();
}
