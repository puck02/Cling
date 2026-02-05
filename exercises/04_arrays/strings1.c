#include "unity.h"

// TODO: 实现这个函数
// 计算字符串的长度（不使用strlen）
// 提示：遍历字符直到遇到'\0'
int string_length(const char *str) {
    // TODO: 实现
    return 0;
}

// TODO: 实现这个函数
// 返回字符串中第一个字符
char first_char(const char *str) {
    // TODO: 实现
    return '\0';
}

void setUp(void) {}
void tearDown(void) {}

void test_string_length(void) {
    TEST_ASSERT_EQUAL_INT(5, string_length("hello"));
    TEST_ASSERT_EQUAL_INT(0, string_length(""));
    TEST_ASSERT_EQUAL_INT(13, string_length("Hello, World!"));
}

void test_first_char(void) {
    TEST_ASSERT_EQUAL_CHAR('h', first_char("hello"));
    TEST_ASSERT_EQUAL_CHAR('H', first_char("Hello"));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_string_length);
    RUN_TEST(test_first_char);
    return UNITY_END();
}
