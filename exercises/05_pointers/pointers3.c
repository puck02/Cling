#include "unity.h"

// 学习目标: 指针算术 - 通过指针偏移访问数组元素

// TODO: 使用指针算术获取数组第 n 个元素
// *(ptr + n) 等同于 ptr[n]
int get_nth_element(int *ptr, int n) {
    // TODO: 在这里实现
    
}

// TODO: 使用指针算术设置数组第 n 个元素
void set_nth_element(int *ptr, int n, int value) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_get_nth_element(void) {
    int arr[] = {10, 20, 30, 40, 50};
    TEST_ASSERT_EQUAL_INT(10, get_nth_element(arr, 0));
    TEST_ASSERT_EQUAL_INT(30, get_nth_element(arr, 2));
    TEST_ASSERT_EQUAL_INT(50, get_nth_element(arr, 4));
}

void test_set_nth_element(void) {
    int arr[] = {1, 2, 3, 4, 5};
    set_nth_element(arr, 0, 100);
    set_nth_element(arr, 2, 200);
    TEST_ASSERT_EQUAL_INT(100, arr[0]);
    TEST_ASSERT_EQUAL_INT(200, arr[2]);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_get_nth_element);
    RUN_TEST(test_set_nth_element);
    return UNITY_END();
}
