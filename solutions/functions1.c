#include "unity.h"

int add(int a, int b) {
    return a + b;
}

void setUp(void) {}
void tearDown(void) {}

void test_add(void) {
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
    TEST_ASSERT_EQUAL_INT(0, add(-1, 1));
    TEST_ASSERT_EQUAL_INT(-5, add(-2, -3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    return UNITY_END();
}
