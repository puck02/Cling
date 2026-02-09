#include "unity.h"

// 学习目标: 遍历数组，查找最值

// TODO: 返回数组中的最大值
// 提示: 假设第一个元素是最大的，然后逐个比较
int find_max(int arr[], int size) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_find_max(void) {
    int arr1[] = {1, 5, 3, 9, 2};
    TEST_ASSERT_EQUAL_INT(9, find_max(arr1, 5));

    int arr2[] = {-5, -1, -10, -3};
    TEST_ASSERT_EQUAL_INT(-1, find_max(arr2, 4));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_find_max);
    return UNITY_END();
}
