#include "unity.h"
#include <stdlib.h>

// 学习目标: 动态分配二维数组

// TODO: 分配一个 rows x cols 的二维整数数组，所有元素初始化为 0
// 步骤:
// 1. 用 malloc 分配 rows 个 int* 指针
// 2. 对每一行，用 malloc 分配 cols 个 int
// 3. 将所有元素设为 0
int** allocate_2d_array(int rows, int cols) {
    // TODO: 在这里实现
    
}

// TODO: 释放二维数组的内存
// 步骤:
// 1. 先 free 每一行
// 2. 再 free 指针数组本身
void free_2d_array(int **arr, int rows) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_allocate_and_free_2d_array(void) {
    int **arr = allocate_2d_array(3, 4);
    TEST_ASSERT_NOT_NULL(arr);

    arr[0][0] = 1;
    arr[2][3] = 99;
    TEST_ASSERT_EQUAL_INT(1, arr[0][0]);
    TEST_ASSERT_EQUAL_INT(99, arr[2][3]);

    free_2d_array(arr, 3);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_allocate_and_free_2d_array);
    return UNITY_END();
}
