#include "unity.h"

// 学习目标: 通过指针参数返回多个结果

// TODO: 将 *x 和 *y 都增加 10
void increment_both(int *x, int *y) {
    // TODO: 在这里实现
    
}

// TODO: 找到数组的最小值和最大值，通过指针参数返回
// *min 存最小值, *max 存最大值
void find_min_max(int *arr, int size, int *min, int *max) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_increment_both(void) {
    int a = 5, b = 10;
    increment_both(&a, &b);
    TEST_ASSERT_EQUAL_INT(15, a);
    TEST_ASSERT_EQUAL_INT(20, b);
}

void test_find_min_max(void) {
    int arr[] = {5, 2, 8, 1, 9};
    int min, max;
    find_min_max(arr, 5, &min, &max);
    TEST_ASSERT_EQUAL_INT(1, min);
    TEST_ASSERT_EQUAL_INT(9, max);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_increment_both);
    RUN_TEST(test_find_min_max);
    return UNITY_END();
}
