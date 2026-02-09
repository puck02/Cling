#include "unity.h"
#include <string.h>

// 学习目标: 实现字符串复制和拼接

// TODO: 手动实现字符串复制（不使用 strcpy）
// 逐字符复制 src 到 dest，包括末尾的 '\0'
void my_strcpy(char *dest, const char *src) {
    // TODO: 在这里实现
    
}

// TODO: 手动实现字符串拼接（不使用 strcat）
// 将 src 追加到 dest 的末尾
// 提示: 先找到 dest 的末尾，再从那里开始复制
void my_strcat(char *dest, const char *src) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_my_strcpy(void) {
    char dest[20];
    my_strcpy(dest, "hello");
    TEST_ASSERT_EQUAL_STRING("hello", dest);
}

void test_my_strcat(void) {
    char dest[20] = "hello";
    my_strcat(dest, " world");
    TEST_ASSERT_EQUAL_STRING("hello world", dest);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_my_strcpy);
    RUN_TEST(test_my_strcat);
    return UNITY_END();
}
