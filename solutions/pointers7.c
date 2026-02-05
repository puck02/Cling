#include "unity.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int apply_operation(int (*operation)(int, int), int a, int b) {
    return operation(a, b);
}

void setUp(void) {}
void tearDown(void) {}

void test_apply_operation(void) {
    TEST_ASSERT_EQUAL_INT(8, apply_operation(add, 5, 3));
    TEST_ASSERT_EQUAL_INT(2, apply_operation(subtract, 5, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_apply_operation);
    return UNITY_END();
}
