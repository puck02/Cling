#include "unity.h"

// 学习目标: 数组的求和与求平均值

// TODO: 计算数组所有元素的和
int sum_array(int arr[], int size) {
    // TODO: 在这里实现
    
}

// TODO: 计算数组元素的平均值（整数除法）
// 例如: average_array({1,2,3,4,5}, 5) = 15/5 = 3
int average_array(int arr[], int size) {
    // TODO: 在这里实现
    // 提示: 可以先调用 sum_array，再除以 size
    
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
