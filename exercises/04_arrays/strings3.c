#include "unity.h"
#include <string.h>

// TODO: 实现这个函数
// 比较两个字符串是否相等（不使用strcmp）
// 相等返回1，不相等返回0
int strings_equal(const char *str1, const char *str2) {
    // TODO: 实现
    return 0;
}

// TODO: 实现这个函数
// 计算字符串中某个字符出现的次数
int count_char(const char *str, char ch) {
    // TODO: 实现
    return 0;
}

void setUp(void) {}
void tearDown(void) {}

void test_strings_equal(void) {
    TEST_ASSERT_EQUAL_INT(1, strings_equal("hello", "hello"));
    TEST_ASSERT_EQUAL_INT(0, strings_equal("hello", "world"));
    TEST_ASSERT_EQUAL_INT(1, strings_equal("", ""));
}

void test_count_char(void) {
    TEST_ASSERT_EQUAL_INT(2, count_char("hello", 'l'));  // "hello"中'l'出现2次
    TEST_ASSERT_EQUAL_INT(0, count_char("hello", 'x'));
    TEST_ASSERT_EQUAL_INT(1, count_char("hello", 'h'));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_strings_equal);
    RUN_TEST(test_count_char);
    return UNITY_END();
}
