#include "unity.h"

// 学习目标: 使用指针遍历数组

// TODO: 使用指针遍历数组并计算元素和
// 可以用 *(ptr + i) 或 ptr[i]
int sum_with_pointer(int *ptr, int size) {
    // TODO: 在这里实现
    
}

// TODO: 使用指针找到数组中的最小值
int find_min_with_pointer(int *ptr, int size) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_with_pointer(void) {
    int arr[] = {1, 2, 3, 4, 5};
    TEST_ASSERT_EQUAL_INT(15, sum_with_pointer(arr, 5));
}

void test_find_min_with_pointer(void) {
    int arr[] = {5, 2, 8, 1, 9};
    TEST_ASSERT_EQUAL_INT(1, find_min_with_pointer(arr, 5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_with_pointer);
    RUN_TEST(test_find_min_with_pointer);
    return UNITY_END();
}
