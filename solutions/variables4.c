#include "unity.h"
#include <limits.h>

int get_char_max(void) {
    return CHAR_MAX;
}

int get_int_min(void) {
    return INT_MIN;
}

long get_long_max(void) {
    return LONG_MAX;
}

void setUp(void) {}
void tearDown(void) {}

void test_char_max(void) {
    TEST_ASSERT_EQUAL_INT(CHAR_MAX, get_char_max());
}

void test_int_min(void) {
    TEST_ASSERT_EQUAL_INT(INT_MIN, get_int_min());
}

void test_long_max(void) {
    TEST_ASSERT_EQUAL_INT64(LONG_MAX, get_long_max());
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_char_max);
    RUN_TEST(test_int_min);
    RUN_TEST(test_long_max);
    return UNITY_END();
}
