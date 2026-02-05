#include "unity.h"

int sum_odd_numbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) continue;
        sum += i;
    }
    return sum;
}

int count_non_zero(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) continue;
        count++;
    }
    return count;
}

int sum_positive(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] <= 0) continue;
        sum += arr[i];
    }
    return sum;
}

int sum_skip_multiples_of_3(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) continue;
        sum += i;
    }
    return sum;
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_odd_numbers(void) {
    TEST_ASSERT_EQUAL_INT(25, sum_odd_numbers(10));
    TEST_ASSERT_EQUAL_INT(9, sum_odd_numbers(5));
    TEST_ASSERT_EQUAL_INT(1, sum_odd_numbers(1));
}

void test_count_non_zero(void) {
    int arr1[] = {1, 0, 2, 0, 3};
    TEST_ASSERT_EQUAL_INT(3, count_non_zero(arr1, 5));
    
    int arr2[] = {0, 0, 0};
    TEST_ASSERT_EQUAL_INT(0, count_non_zero(arr2, 3));
}

void test_sum_positive(void) {
    int arr[] = {1, -2, 3, -4, 5};
    TEST_ASSERT_EQUAL_INT(9, sum_positive(arr, 5));
}

void test_sum_skip_multiples_of_3(void) {
    TEST_ASSERT_EQUAL_INT(37, sum_skip_multiples_of_3(10));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_odd_numbers);
    RUN_TEST(test_count_non_zero);
    RUN_TEST(test_sum_positive);
    RUN_TEST(test_sum_skip_multiples_of_3);
    return UNITY_END();
}
