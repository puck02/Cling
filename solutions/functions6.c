#include "unity.h"

int global_counter = 0;

int increment_counter(void) {
    global_counter++;
    return global_counter;
}

void reset_counter(void) {
    global_counter = 0;
}

void setUp(void) {
    reset_counter();
}

void tearDown(void) {}

void test_increment(void) {
    TEST_ASSERT_EQUAL_INT(1, increment_counter());
    TEST_ASSERT_EQUAL_INT(2, increment_counter());
    TEST_ASSERT_EQUAL_INT(3, increment_counter());
}

void test_reset(void) {
    increment_counter();
    increment_counter();
    reset_counter();
    TEST_ASSERT_EQUAL_INT(0, global_counter);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_increment);
    RUN_TEST(test_reset);
    return UNITY_END();
}
