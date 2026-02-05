#include "unity.h"

int sum_recursive(int n) {
    if (n == 0) return 0;
    return n + sum_recursive(n - 1);
}

int countdown_product(int n) {
    if (n == 1) return 1;
    return n * countdown_product(n - 1);
}

int count_digits(int n) {
    if (n < 10) return 1;
    return 1 + count_digits(n / 10);
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_recursive(void) {
    TEST_ASSERT_EQUAL_INT(0, sum_recursive(0));
    TEST_ASSERT_EQUAL_INT(1, sum_recursive(1));
    TEST_ASSERT_EQUAL_INT(15, sum_recursive(5));
    TEST_ASSERT_EQUAL_INT(55, sum_recursive(10));
}

void test_countdown_product(void) {
    TEST_ASSERT_EQUAL_INT(1, countdown_product(1));
    TEST_ASSERT_EQUAL_INT(120, countdown_product(5));
    TEST_ASSERT_EQUAL_INT(24, countdown_product(4));
}

void test_count_digits(void) {
    TEST_ASSERT_EQUAL_INT(1, count_digits(5));
    TEST_ASSERT_EQUAL_INT(2, count_digits(42));
    TEST_ASSERT_EQUAL_INT(4, count_digits(1234));
    TEST_ASSERT_EQUAL_INT(5, count_digits(98765));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_recursive);
    RUN_TEST(test_countdown_product);
    RUN_TEST(test_count_digits);
    return UNITY_END();
}
