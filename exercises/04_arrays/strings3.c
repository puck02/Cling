#include "unity.h"
#include <string.h>

// 学习目标: 字符串比较和字符查找

// TODO: 判断两个字符串是否相同
// 逐字符比较，完全相同返回 1，否则返回 0
// 提示: 不能用 == 比较字符串，需要逐字符比较
int strings_equal(const char *str1, const char *str2) {
    // TODO: 在这里实现
    
}

// TODO: 统计字符 ch 在字符串中出现的次数
// 例如: count_char("hello", 'l') 返回 2
int count_char(const char *str, char ch) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_strings_equal(void) {
    TEST_ASSERT_EQUAL_INT(1, strings_equal("hello", "hello"));
    TEST_ASSERT_EQUAL_INT(0, strings_equal("hello", "world"));
    TEST_ASSERT_EQUAL_INT(1, strings_equal("", ""));
}

void test_count_char(void) {
    TEST_ASSERT_EQUAL_INT(2, count_char("hello", 'l'));
    TEST_ASSERT_EQUAL_INT(0, count_char("hello", 'x'));
    TEST_ASSERT_EQUAL_INT(1, count_char("hello", 'h'));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_strings_equal);
    RUN_TEST(test_count_char);
    return UNITY_END();
}
