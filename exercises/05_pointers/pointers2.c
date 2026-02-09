#include "unity.h"

// 学习目标: 通过指针读写变量的值

// TODO: 通过指针设置变量的值
// *ptr = value
void set_value(int *ptr, int value) {
    // TODO: 在这里实现
    
}

// TODO: 通过指针读取变量的值
// return *ptr
int get_value(int *ptr) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_set_value(void) {
    int x = 10;
    set_value(&x, 20);
    TEST_ASSERT_EQUAL_INT(20, x);
}

void test_get_value(void) {
    int x = 42;
    TEST_ASSERT_EQUAL_INT(42, get_value(&x));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_set_value);
    RUN_TEST(test_get_value);
    return UNITY_END();
}
