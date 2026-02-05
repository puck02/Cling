#include "unity.h"
#include <stddef.h>

size_t get_int_size(void) {
    return sizeof(int);
}

size_t get_double_size(void) {
    return sizeof(double);
}

size_t get_pointer_size(void) {
    return sizeof(void*);
}

size_t get_array_size(void) {
    int arr[10];
    return sizeof(arr);
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
