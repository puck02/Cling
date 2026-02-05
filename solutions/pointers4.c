#include "unity.h"

int sum_with_pointer(int *ptr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }
    return sum;
}

int find_min_with_pointer(int *ptr, int size) {
    int min = *ptr;
    for (int i = 1; i < size; i++) {
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }
    return min;
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_with_pointer(void) {
    int arr[] = {1, 2, 3, 4, 5};
    TEST_ASSERT_EQUAL_INT(15, sum_with_pointer(arr, 5));
}

void test_find_min_with_pointer(void) {
    int arr[] = {5, 2, 8, 1, 9};
    TEST_ASSERT_EQUAL_INT(1, find_min_with_pointer(arr, 5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_with_pointer);
    RUN_TEST(test_find_min_with_pointer);
    return UNITY_END();
}
