#include "unity.h"
#include <stdlib.h>
#include <string.h>

// TODO: 实现这个函数
// 使用calloc分配并初始化为0的数组
// size: 数组大小
int* allocate_zero_array(int size) {
    // TODO: 使用calloc分配内存（自动初始化为0）
    return NULL;
}

// TODO: 实现这个函数
// 复制字符串（使用malloc）
// 返回新分配的字符串副本
char* duplicate_string(const char *str) {
    // TODO: 使用malloc + strcpy
    return NULL;
}

void setUp(void) {}
void tearDown(void) {}

void test_allocate_zero_array(void) {
    int *arr = allocate_zero_array(5);
    TEST_ASSERT_NOT_NULL(arr);
    
    // calloc应该初始化为0
    for (int i = 0; i < 5; i++) {
        TEST_ASSERT_EQUAL_INT(0, arr[i]);
    }
    
    free(arr);
}

void test_duplicate_string(void) {
    char *str = duplicate_string("hello");
    TEST_ASSERT_NOT_NULL(str);
    TEST_ASSERT_EQUAL_STRING("hello", str);
    free(str);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_allocate_zero_array);
    RUN_TEST(test_duplicate_string);
    return UNITY_END();
}
