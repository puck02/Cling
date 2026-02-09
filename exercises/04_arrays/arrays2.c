#include "unity.h"

// 学习目标: 通过索引访问和修改数组元素

// TODO: 返回数组中指定索引的元素
// 例如: get_element({10,20,30}, 1) 返回 20
int get_element(int arr[], int index) {
    // TODO: 在这里实现
    
}

// TODO: 设置数组中指定索引的元素值
void set_element(int arr[], int index, int value) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_get_element(void) {
    int arr[] = {10, 20, 30, 40, 50};
    TEST_ASSERT_EQUAL_INT(10, get_element(arr, 0));
    TEST_ASSERT_EQUAL_INT(30, get_element(arr, 2));
    TEST_ASSERT_EQUAL_INT(50, get_element(arr, 4));
}

void test_set_element(void) {
    int arr[] = {1, 2, 3, 4, 5};
    set_element(arr, 0, 100);
    set_element(arr, 2, 200);
    TEST_ASSERT_EQUAL_INT(100, arr[0]);
    TEST_ASSERT_EQUAL_INT(200, arr[2]);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_get_element);
    RUN_TEST(test_set_element);
    return UNITY_END();
}
