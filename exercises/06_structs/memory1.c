#include "unity.h"
#include <stdlib.h>

// 学习目标: malloc 和 free 基本用法
// malloc(size) 分配 size 字节的内存，返回指针
// free(ptr) 释放之前分配的内存

// TODO: 动态分配一个 size 个 int 元素的数组
// 提示: (int *)malloc(size * sizeof(int))
int* allocate_array(int size) {
    // TODO: 在这里实现
    
}

// TODO: 释放动态分配的数组
// 提示: 调用 free(arr)
void free_array(int *arr) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_allocate_and_free(void) {
    int *arr = allocate_array(5);
    TEST_ASSERT_NOT_NULL(arr);

    arr[0] = 10;
    arr[4] = 50;
    TEST_ASSERT_EQUAL_INT(10, arr[0]);
    TEST_ASSERT_EQUAL_INT(50, arr[4]);

    free_array(arr);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_allocate_and_free);
    return UNITY_END();
}
