#include "unity.h"

int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_to_n(void) {
    TEST_ASSERT_EQUAL_INT(15, sum_to_n(5));
    TEST_ASSERT_EQUAL_INT(55, sum_to_n(10));
    TEST_ASSERT_EQUAL_INT(1, sum_to_n(1));
    TEST_ASSERT_EQUAL_INT(0, sum_to_n(0));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_to_n);
    return UNITY_END();
}
