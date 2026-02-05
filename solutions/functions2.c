#include "unity.h"

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

void setUp(void) {}
void tearDown(void) {}

void test_subtract(void) {
    TEST_ASSERT_EQUAL_INT(2, subtract(5, 3));
    TEST_ASSERT_EQUAL_INT(-2, subtract(3, 5));
}

void test_multiply(void) {
    TEST_ASSERT_EQUAL_INT(15, multiply(3, 5));
    TEST_ASSERT_EQUAL_INT(0, multiply(0, 5));
}

void test_divide(void) {
    TEST_ASSERT_EQUAL_INT(5, divide(15, 3));
    TEST_ASSERT_EQUAL_INT(3, divide(10, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_subtract);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide);
    return UNITY_END();
}
