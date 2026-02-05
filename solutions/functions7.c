#include "unity.h"

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int power(int x, int n) {
    if (n == 0) {
        return 1;
    }
    return x * power(x, n - 1);
}

void setUp(void) {}
void tearDown(void) {}

void test_fibonacci(void) {
    TEST_ASSERT_EQUAL_INT(0, fibonacci(0));
    TEST_ASSERT_EQUAL_INT(1, fibonacci(1));
    TEST_ASSERT_EQUAL_INT(1, fibonacci(2));
    TEST_ASSERT_EQUAL_INT(2, fibonacci(3));
    TEST_ASSERT_EQUAL_INT(5, fibonacci(5));
    TEST_ASSERT_EQUAL_INT(8, fibonacci(6));
}

void test_power(void) {
    TEST_ASSERT_EQUAL_INT(1, power(2, 0));
    TEST_ASSERT_EQUAL_INT(2, power(2, 1));
    TEST_ASSERT_EQUAL_INT(8, power(2, 3));
    TEST_ASSERT_EQUAL_INT(27, power(3, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_fibonacci);
    RUN_TEST(test_power);
    return UNITY_END();
}
