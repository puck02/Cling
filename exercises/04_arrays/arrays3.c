#include "unity.h"

// TODO: 实现这个函数
// 计算数组中所有元素的和
// arr: 数组, size: 数组大小
// 提示：使用for循环遍历数组
int sum_array(int arr[], int size) {
    // TODO: 实现
    return 0;
}

// TODO: 实现这个函数
// 计算数组的平均值
// 提示：sum / size (整数除法)
int average_array(int arr[], int size) {
    // TODO: 实现
    return 0;
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_array(void) {
    int arr1[] = {1, 2, 3, 4, 5};
    TEST_ASSERT_EQUAL_INT(15, sum_array(arr1, 5));
    
    int arr2[] = {10, 20, 30};
    TEST_ASSERT_EQUAL_INT(60, sum_array(arr2, 3));
}

void test_average_array(void) {
    int arr1[] = {1, 2, 3, 4, 5};
    TEST_ASSERT_EQUAL_INT(3, average_array(arr1, 5));
    
    int arr2[] = {10, 20, 30};
    TEST_ASSERT_EQUAL_INT(20, average_array(arr2, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_array);
    RUN_TEST(test_average_array);
    return UNITY_END();
}
