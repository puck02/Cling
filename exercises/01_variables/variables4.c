#include "unity.h"
#include <limits.h>

// 学习目标: 了解C语言各种整数类型的取值范围
// <limits.h> 中定义了各种类型的极限值常量

// TODO: 返回 char 类型的最大值
// 提示: 使用 CHAR_MAX 常量
int get_char_max(void) {
    // TODO: 在这里实现
    
}

// TODO: 返回 int 类型的最小值
// 提示: 使用 INT_MIN 常量
int get_int_min(void) {
    // TODO: 在这里实现
    
}

// TODO: 返回 long 类型的最大值
// 提示: 使用 LONG_MAX 常量
long get_long_max(void) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_char_max(void) {
    TEST_ASSERT_EQUAL_INT(CHAR_MAX, get_char_max());
}

void test_int_min(void) {
    TEST_ASSERT_EQUAL_INT(INT_MIN, get_int_min());
}

void test_long_max(void) {
    TEST_ASSERT_EQUAL_INT64(LONG_MAX, get_long_max());
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_char_max);
    RUN_TEST(test_int_min);
    RUN_TEST(test_long_max);
    return UNITY_END();
}
