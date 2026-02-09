#include "unity.h"
#include <string.h>
#include <ctype.h>

// 学习目标: 字符串的原地修改

// TODO: 将字符串中所有小写字母转为大写
// 提示: 使用 toupper() 函数，需要 #include <ctype.h>
void to_uppercase(char *str) {
    // TODO: 在这里实现
    
}

// TODO: 反转字符串
// 例如: "hello" -> "olleh"
// 提示: 交换首尾字符，然后向中间移动
void reverse_string(char *str) {
    // TODO: 在这里实现
    
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
