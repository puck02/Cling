#include "unity.h"
#include <string.h>
#include <ctype.h>

// TODO: 实现这个函数
// 将字符串转换为大写（不使用toupper）
// 提示：小写字母a-z的ASCII码比大写字母A-Z大32
void to_uppercase(char *str) {
    // TODO: 实现
}

// TODO: 实现这个函数
// 反转字符串
// 例如："hello" -> "olleh"
void reverse_string(char *str) {
    // TODO: 实现
}

void setUp(void) {}
void tearDown(void) {}

void test_to_uppercase(void) {
    char str1[] = "hello";
    to_uppercase(str1);
    TEST_ASSERT_EQUAL_STRING("HELLO", str1);
    
    char str2[] = "Hello World";
    to_uppercase(str2);
    TEST_ASSERT_EQUAL_STRING("HELLO WORLD", str2);
}

void test_reverse_string(void) {
    char str1[] = "hello";
    reverse_string(str1);
    TEST_ASSERT_EQUAL_STRING("olleh", str1);
    
    char str2[] = "abc";
    reverse_string(str2);
    TEST_ASSERT_EQUAL_STRING("cba", str2);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_to_uppercase);
    RUN_TEST(test_reverse_string);
    return UNITY_END();
}
