#include "unity.h"
#include <stdlib.h>
#include <string.h>

// 学习目标: calloc（自动初始化为0）和字符串的动态复制

// TODO: 使用 calloc 分配 size 个 int 元素的数组
// calloc 会自动将内存初始化为 0
// 格式: (int *)calloc(size, sizeof(int))
int* allocate_zero_array(int size) {
    // TODO: 在这里实现
    
}

// TODO: 动态复制字符串
// 步骤: 1. malloc(strlen(str) + 1) 分配空间
//       2. strcpy 复制内容
//       3. 返回新字符串指针
char* duplicate_string(const char *str) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_allocate_zero_array(void) {
    int *arr = allocate_zero_array(5);
    TEST_ASSERT_NOT_NULL(arr);

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
