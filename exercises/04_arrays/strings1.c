#include "unity.h"

// 学习目标: 理解C字符串（以 '\0' 结尾的字符数组）

// TODO: 手动计算字符串长度（不使用 strlen）
// 提示: 遍历直到遇到 '\0'
int string_length(const char *str) {
    // TODO: 在这里实现
    
}

// TODO: 返回字符串的第一个字符
char first_char(const char *str) {
    // TODO: 在这里实现
    
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
