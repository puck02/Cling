#include "unity.h"

int sum_range(int start, int end) {
    int sum = 0;
    int i = start;
    do {
        sum += i;
        i++;
    } while (i <= end);
    return sum;
}

int validate_input(int valid_value, int attempts[], int size) {
    int i = 0;
    int count = 1;
    do {
        if (attempts[i] == valid_value) break;
        i++;
        count++;
    } while (i < size);
    return count;
}

int sum_digits(int n) {
    int sum = 0;
    do {
        sum += n % 10;
        n /= 10;
    } while (n > 0);
    return sum;
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_range(void) {
    TEST_ASSERT_EQUAL_INT(15, sum_range(1, 5));
    TEST_ASSERT_EQUAL_INT(39, sum_range(4, 9));
    TEST_ASSERT_EQUAL_INT(5, sum_range(5, 5));
}

void test_validate_input(void) {
    int attempts1[] = {1, 2, 3, 5};
    TEST_ASSERT_EQUAL_INT(4, validate_input(5, attempts1, 4));
    
    int attempts2[] = {10, 20};
    TEST_ASSERT_EQUAL_INT(1, validate_input(10, attempts2, 2));
}

void test_sum_digits(void) {
    TEST_ASSERT_EQUAL_INT(6, sum_digits(123));
    TEST_ASSERT_EQUAL_INT(10, sum_digits(1234));
    TEST_ASSERT_EQUAL_INT(1, sum_digits(1));
    TEST_ASSERT_EQUAL_INT(0, sum_digits(0));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_range);
    RUN_TEST(test_validate_input);
    RUN_TEST(test_sum_digits);
    return UNITY_END();
}
