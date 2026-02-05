#include "unity.h"

int integer_divide(int a, int b) {
    return a / b;
}

int get_remainder(int a, int b) {
    return a % b;
}

void divide_with_remainder(int a, int b, int *quotient, int *remainder) {
    *quotient = a / b;
    *remainder = a % b;
}

void setUp(void) {}
void tearDown(void) {}

void test_integer_divide(void) {
    TEST_ASSERT_EQUAL_INT(3, integer_divide(10, 3));
    TEST_ASSERT_EQUAL_INT(2, integer_divide(5, 2));
    TEST_ASSERT_EQUAL_INT(0, integer_divide(3, 5));
    TEST_ASSERT_EQUAL_INT(5, integer_divide(25, 5));
}

void test_get_remainder(void) {
    TEST_ASSERT_EQUAL_INT(1, get_remainder(10, 3));
    TEST_ASSERT_EQUAL_INT(1, get_remainder(5, 2));
    TEST_ASSERT_EQUAL_INT(3, get_remainder(3, 5));
    TEST_ASSERT_EQUAL_INT(0, get_remainder(25, 5));
}

void test_divide_with_remainder(void) {
    int q, r;
    divide_with_remainder(10, 3, &q, &r);
    TEST_ASSERT_EQUAL_INT(3, q);
    TEST_ASSERT_EQUAL_INT(1, r);
    
    divide_with_remainder(17, 5, &q, &r);
    TEST_ASSERT_EQUAL_INT(3, q);
    TEST_ASSERT_EQUAL_INT(2, r);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_integer_divide);
    RUN_TEST(test_get_remainder);
    RUN_TEST(test_divide_with_remainder);
    return UNITY_END();
}
