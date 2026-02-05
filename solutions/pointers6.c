#include "unity.h"

void increment_both(int *x, int *y) {
    *x += 10;
    *y += 10;
}

void find_min_max(int *arr, int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

void setUp(void) {}
void tearDown(void) {}

void test_increment_both(void) {
    int a = 5, b = 10;
    increment_both(&a, &b);
    TEST_ASSERT_EQUAL_INT(15, a);
    TEST_ASSERT_EQUAL_INT(20, b);
}

void test_find_min_max(void) {
    int arr[] = {5, 2, 8, 1, 9};
    int min, max;
    find_min_max(arr, 5, &min, &max);
    TEST_ASSERT_EQUAL_INT(1, min);
    TEST_ASSERT_EQUAL_INT(9, max);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_increment_both);
    RUN_TEST(test_find_min_max);
    return UNITY_END();
}
