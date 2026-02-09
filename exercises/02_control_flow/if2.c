#include "unity.h"

// 学习目标: 使用嵌套的 if/else 处理多个条件

// TODO: 返回三个数中的最大值
// 提示: 可以用嵌套 if/else，也可以用多个 else if
int max_of_three(int a, int b, int c) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_max_of_three(void) {
    TEST_ASSERT_EQUAL_INT(5, max_of_three(5, 3, 2));
    TEST_ASSERT_EQUAL_INT(10, max_of_three(3, 10, 7));
    TEST_ASSERT_EQUAL_INT(8, max_of_three(1, 2, 8));
    TEST_ASSERT_EQUAL_INT(5, max_of_three(5, 5, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_max_of_three);
    return UNITY_END();
}
