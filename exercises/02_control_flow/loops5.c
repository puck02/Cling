#include "unity.h"

// 学习目标: 使用 continue 语句跳过当前迭代

// TODO: 计算 1 到 n 中所有奇数的和
// 遇到偶数用 continue 跳过
// 例如: sum_odd_numbers(10) = 1+3+5+7+9 = 25
int sum_odd_numbers(int n) {
    // TODO: 在这里实现
    
}

// TODO: 统计数组中非零元素的个数
// 遇到 0 用 continue 跳过
int count_non_zero(int arr[], int size) {
    // TODO: 在这里实现
    
}

// TODO: 计算数组中所有正数的和
// 遇到负数或零用 continue 跳过
int sum_positive(int arr[], int size) {
    // TODO: 在这里实现
    
}

// TODO: 计算 1 到 n 中跳过 3 的倍数后的和
// 例如: n=10 时，跳过 3,6,9，结果 = 1+2+4+5+7+8+10 = 37
int sum_skip_multiples_of_3(int n) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_odd_numbers(void) {
    TEST_ASSERT_EQUAL_INT(25, sum_odd_numbers(10));
    TEST_ASSERT_EQUAL_INT(9, sum_odd_numbers(5));
    TEST_ASSERT_EQUAL_INT(1, sum_odd_numbers(1));
}

void test_count_non_zero(void) {
    int arr1[] = {1, 0, 2, 0, 3};
    TEST_ASSERT_EQUAL_INT(3, count_non_zero(arr1, 5));

    int arr2[] = {0, 0, 0};
    TEST_ASSERT_EQUAL_INT(0, count_non_zero(arr2, 3));
}

void test_sum_positive(void) {
    int arr[] = {1, -2, 3, -4, 5};
    TEST_ASSERT_EQUAL_INT(9, sum_positive(arr, 5));
}

void test_sum_skip_multiples_of_3(void) {
    TEST_ASSERT_EQUAL_INT(37, sum_skip_multiples_of_3(10));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_odd_numbers);
    RUN_TEST(test_count_non_zero);
    RUN_TEST(test_sum_positive);
    RUN_TEST(test_sum_skip_multiples_of_3);
    return UNITY_END();
}
