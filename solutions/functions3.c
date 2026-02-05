#include "unity.h"
#include <stdbool.h>

// 函数声明
bool is_even(int n);

void setUp(void) {}
void tearDown(void) {}

void test_is_even(void) {
    TEST_ASSERT_TRUE(is_even(4));
    TEST_ASSERT_FALSE(is_even(5));
    TEST_ASSERT_TRUE(is_even(0));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_is_even);
    return UNITY_END();
}

// 函数定义
bool is_even(int n) {
    return n % 2 == 0;
}
