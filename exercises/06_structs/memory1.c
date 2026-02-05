#include "unity.h"
#include <stdlib.h>

// TODO: 实现这个函数
// 使用malloc分配一个int数组
// size: 数组大小
// 返回：指向新分配数组的指针
int* allocate_array(int size) {
    // TODO: 使用malloc分配内存
    return NULL;
}

// TODO: 实现这个函数
// 使用free释放数组内存
void free_array(int *arr) {
    // TODO: 使用free释放内存
}

void setUp(void) {}
void tearDown(void) {}

void test_allocate_and_free(void) {
    int *arr = allocate_array(5);
    TEST_ASSERT_NOT_NULL(arr);
    
    // 设置和读取值
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
