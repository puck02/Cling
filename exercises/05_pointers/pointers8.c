#include "unity.h"

// 学习目标: 使用函数指针实现通用排序

typedef int (*compare_func)(int, int);

// TODO: 实现比较函数 - 如果 a < b 返回 1，否则返回 0
int less_than(int a, int b) {
    // TODO: 在这里实现
    
}

// TODO: 实现比较函数 - 如果 a > b 返回 1，否则返回 0
int greater_than(int a, int b) {
    // TODO: 在这里实现
    
}

// TODO: 使用冒泡排序和比较函数对数组排序
// compare 返回 1 表示需要交换
// 提示: 两层循环，如果 compare(arr[j], arr[j+1]) 为真则交换
void sort_array(int *arr, int size, compare_func compare) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_sort_ascending(void) {
    int arr[] = {5, 2, 8, 1, 9};
    sort_array(arr, 5, less_than);
    TEST_ASSERT_EQUAL_INT(1, arr[0]);
    TEST_ASSERT_EQUAL_INT(2, arr[1]);
    TEST_ASSERT_EQUAL_INT(5, arr[2]);
    TEST_ASSERT_EQUAL_INT(8, arr[3]);
    TEST_ASSERT_EQUAL_INT(9, arr[4]);
}

void test_sort_descending(void) {
    int arr[] = {5, 2, 8, 1, 9};
    sort_array(arr, 5, greater_than);
    TEST_ASSERT_EQUAL_INT(9, arr[0]);
    TEST_ASSERT_EQUAL_INT(8, arr[1]);
    TEST_ASSERT_EQUAL_INT(5, arr[2]);
    TEST_ASSERT_EQUAL_INT(2, arr[3]);
    TEST_ASSERT_EQUAL_INT(1, arr[4]);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sort_ascending);
    RUN_TEST(test_sort_descending);
    return UNITY_END();
}
