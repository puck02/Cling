#include "unity.h"

void set_value(int *ptr, int value) {
    *ptr = value;
}

int get_value(int *ptr) {
    return *ptr;
}

void setUp(void) {}
void tearDown(void) {}

void test_set_value(void) {
    int x = 10;
    set_value(&x, 20);
    TEST_ASSERT_EQUAL_INT(20, x);
}

void test_get_value(void) {
    int x = 42;
    TEST_ASSERT_EQUAL_INT(42, get_value(&x));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_set_value);
    RUN_TEST(test_get_value);
    return UNITY_END();
}
