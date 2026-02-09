#include "unity.h"

// 学习目标: 理解全局变量和函数的关系

int global_counter = 0;

// TODO: 将 global_counter 加 1，并返回新的值
int increment_counter(void) {
    // TODO: 在这里实现
    
}

// TODO: 将 global_counter 重置为 0
void reset_counter(void) {
    // TODO: 在这里实现
    
}

void setUp(void) {
    reset_counter();
}

void tearDown(void) {}

void test_increment(void) {
    TEST_ASSERT_EQUAL_INT(1, increment_counter());
    TEST_ASSERT_EQUAL_INT(2, increment_counter());
    TEST_ASSERT_EQUAL_INT(3, increment_counter());
}

void test_reset(void) {
    increment_counter();
    increment_counter();
    reset_counter();
    TEST_ASSERT_EQUAL_INT(0, global_counter);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_increment);
    RUN_TEST(test_reset);
    return UNITY_END();
}
