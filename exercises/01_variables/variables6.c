#include "unity.h"
#include <stddef.h>

// TODO: 实现这些函数来返回类型或变量的大小

size_t get_int_size(void) {
    // 返回int类型的大小（字节数）
    return 0;
}

size_t get_double_size(void) {
    // 返回double类型的大小
    return 0;
}

size_t get_pointer_size(void) {
    // 返回指针的大小
    // 提示：sizeof(void*)
    return 0;
}

size_t get_array_size(void) {
    // 返回包含10个int的数组的总大小
    int arr[10];
    return 0;
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
