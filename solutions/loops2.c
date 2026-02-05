#include "unity.h"

int factorial(int n) {
    int result = 1;
    int i = n;
    while (i > 1) {
        result *= i;
        i--;
    }
    return result;
}

void setUp(void) {}
void tearDown(void) {}

void test_factorial(void) {
    TEST_ASSERT_EQUAL_INT(1, factorial(0));
    TEST_ASSERT_EQUAL_INT(1, factorial(1));
    TEST_ASSERT_EQUAL_INT(120, factorial(5));
    TEST_ASSERT_EQUAL_INT(24, factorial(4));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_factorial);
    return UNITY_END();
}
