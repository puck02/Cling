#include "unity.h"
#include <string.h>

// TODO: 实现这个函数
// 复制源字符串到目标字符串（不使用strcpy）
// 提示：逐个字符复制，直到'\0'
void my_strcpy(char *dest, const char *src) {
    // TODO: 实现
}

// TODO: 实现这个函数
// 连接两个字符串（不使用strcat）
// 将src追加到dest的末尾
void my_strcat(char *dest, const char *src) {
    // TODO: 实现
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
