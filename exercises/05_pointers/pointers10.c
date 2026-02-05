#include "unity.h"
#include <stdlib.h>

// TODO: 实现这个函数
// 安全地解引用指针
// 如果ptr是NULL，返回default_value
// 否则返回*ptr
int safe_dereference(int *ptr, int default_value) {
    // TODO: 检查ptr是否为NULL
    return 0;
}

// TODO: 实现这个函数
// 查找数组中第一个等于target的元素
// 返回指向该元素的指针，如果没找到返回NULL
int* find_element(int *arr, int size, int target) {
    // TODO: 实现查找，找到返回地址，否则返回NULL
    return NULL;
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
