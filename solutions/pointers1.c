#include "unity.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void setUp(void) {}
void tearDown(void) {}

void test_swap(void) {
    int x = 5, y = 10;
    swap(&x, &y);
    TEST_ASSERT_EQUAL_INT(10, x);
    TEST_ASSERT_EQUAL_INT(5, y);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_swap);
    return UNITY_END();
}
