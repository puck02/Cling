#include "unity.h"
#include <stdlib.h>

// 学习目标: NULL 指针的安全处理

// TODO: 安全解引用指针
// 如果 ptr 是 NULL，返回 default_value
// 否则返回 *ptr
int safe_dereference(int *ptr, int default_value) {
    // TODO: 在这里实现
    
}

// TODO: 在数组中查找目标值
// 找到返回指向该元素的指针，没找到返回 NULL
int* find_element(int *arr, int size, int target) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_safe_dereference(void) {
    int value = 42;
    TEST_ASSERT_EQUAL_INT(42, safe_dereference(&value, 0));
    TEST_ASSERT_EQUAL_INT(99, safe_dereference(NULL, 99));
}

void test_find_element(void) {
    int arr[] = {1, 2, 3, 4, 5};

    int *ptr = find_element(arr, 5, 3);
    TEST_ASSERT_NOT_NULL(ptr);
    TEST_ASSERT_EQUAL_INT(3, *ptr);

    ptr = find_element(arr, 5, 10);
    TEST_ASSERT_NULL(ptr);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_safe_dereference);
    RUN_TEST(test_find_element);
    return UNITY_END();
}
