#include "unity.h"

int sign(int x) {
    if (x > 0) {
        return 1;
    } else if (x < 0) {
        return -1;
    } else {
        return 0;
    }
}

void setUp(void) {}
void tearDown(void) {}

void test_sign_positive(void) {
    TEST_ASSERT_EQUAL_INT(1, sign(5));
    TEST_ASSERT_EQUAL_INT(1, sign(100));
}

void test_sign_negative(void) {
    TEST_ASSERT_EQUAL_INT(-1, sign(-5));
    TEST_ASSERT_EQUAL_INT(-1, sign(-100));
}

void test_sign_zero(void) {
    TEST_ASSERT_EQUAL_INT(0, sign(0));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sign_positive);
    RUN_TEST(test_sign_negative);
    RUN_TEST(test_sign_zero);
    return UNITY_END();
}
