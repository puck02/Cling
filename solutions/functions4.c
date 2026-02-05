#include "unity.h"

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

void setUp(void) {}
void tearDown(void) {}

void test_max(void) {
    TEST_ASSERT_EQUAL_INT(5, max(5, 3));
    TEST_ASSERT_EQUAL_INT(10, max(8, 10));
    TEST_ASSERT_EQUAL_INT(0, max(0, -5));
}

void test_min(void) {
    TEST_ASSERT_EQUAL_INT(3, min(5, 3));
    TEST_ASSERT_EQUAL_INT(8, min(8, 10));
    TEST_ASSERT_EQUAL_INT(-5, min(0, -5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_max);
    RUN_TEST(test_min);
    return UNITY_END();
}
