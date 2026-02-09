#include "unity.h"
#include <stddef.h>

// 学习目标: 理解 sizeof 运算符
// sizeof 返回类型或变量所占的字节数
// 用法: sizeof(int)  sizeof(变量名)  sizeof(数组名)

// TODO: 返回 int 类型占用的字节数
// 提示: 使用 sizeof(int)
size_t get_int_size(void) {
    // TODO: 在这里实现
    
}

// TODO: 返回 double 类型占用的字节数
size_t get_double_size(void) {
    // TODO: 在这里实现
    
}

// TODO: 返回指针类型占用的字节数
// 提示: 使用 sizeof(void*)
size_t get_pointer_size(void) {
    // TODO: 在这里实现
    
}

// TODO: 返回一个包含10个int元素的数组占用的总字节数
// 提示: 声明 int arr[10]，然后返回 sizeof(arr)
size_t get_array_size(void) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_int_size(void) {
    TEST_ASSERT_EQUAL_size_t(sizeof(int), get_int_size());
}

void test_double_size(void) {
    TEST_ASSERT_EQUAL_size_t(sizeof(double), get_double_size());
}

void test_pointer_size(void) {
    TEST_ASSERT_EQUAL_size_t(sizeof(void*), get_pointer_size());
}

void test_array_size(void) {
    TEST_ASSERT_EQUAL_size_t(10 * sizeof(int), get_array_size());
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_int_size);
    RUN_TEST(test_double_size);
    RUN_TEST(test_pointer_size);
    RUN_TEST(test_array_size);
    return UNITY_END();
}
