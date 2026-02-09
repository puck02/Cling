#include "unity.h"

// 学习目标: 函数指针 - 将函数作为参数传递

// TODO: 实现加法函数
int add(int a, int b) {
    // TODO: 在这里实现
    
}

// TODO: 实现减法函数
int subtract(int a, int b) {
    // TODO: 在这里实现
    
}

// apply_operation 接受一个函数指针参数，调用它并返回结果
// operation 是一个指向 "接受两个int参数并返回int" 的函数指针
int apply_operation(int (*operation)(int, int), int a, int b) {
    return operation(a, b);
}

void setUp(void) {}
void tearDown(void) {}

void test_apply_operation(void) {
    TEST_ASSERT_EQUAL_INT(8, apply_operation(add, 5, 3));
    TEST_ASSERT_EQUAL_INT(2, apply_operation(subtract, 5, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_apply_operation);
    return UNITY_END();
}
