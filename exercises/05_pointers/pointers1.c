#include "unity.h"

// 学习目标: 使用指针交换两个变量的值

// TODO: 通过指针交换两个整数的值
// 提示: 需要一个临时变量 temp
void swap(int *a, int *b) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_swap(void) {
    int x = 5, y = 10;
    swap(&x, &y);
    TEST_ASSERT_EQUAL_INT(10, x);
    TEST_ASSERT_EQUAL_INT(5, y);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_swap);
    return UNITY_END();
}
