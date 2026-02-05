#include "unity.h"

int get_by_pointer(int *arr, int index) {
    return *(arr + index);
}

int get_by_bracket(int *ptr, int index) {
    return ptr[index];
}

int verify_equivalence(int *arr, int index) {
    return arr[index] == *(arr + index) ? 1 : 0;
}

int sum_by_pointer(int *arr, int size) {
    int sum = 0;
    for (int *p = arr; p < arr + size; p++) {
        sum += *p;
    }
    return sum;
}

void setUp(void) {}
void tearDown(void) {}

void test_get_by_pointer(void) {
    int arr[] = {10, 20, 30, 40};
    TEST_ASSERT_EQUAL_INT(10, get_by_pointer(arr, 0));
    TEST_ASSERT_EQUAL_INT(30, get_by_pointer(arr, 2));
}

void test_get_by_bracket(void) {
    int arr[] = {10, 20, 30, 40};
    TEST_ASSERT_EQUAL_INT(20, get_by_bracket(arr, 1));
    TEST_ASSERT_EQUAL_INT(40, get_by_bracket(arr, 3));
}

void test_verify_equivalence(void) {
    int arr[] = {5, 15, 25, 35};
    TEST_ASSERT_EQUAL_INT(1, verify_equivalence(arr, 0));
    TEST_ASSERT_EQUAL_INT(1, verify_equivalence(arr, 2));
}

void test_sum_by_pointer(void) {
    int arr[] = {1, 2, 3, 4, 5};
    TEST_ASSERT_EQUAL_INT(15, sum_by_pointer(arr, 5));
    
    int arr2[] = {10, 20, 30};
    TEST_ASSERT_EQUAL_INT(60, sum_by_pointer(arr2, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_get_by_pointer);
    RUN_TEST(test_get_by_bracket);
    RUN_TEST(test_verify_equivalence);
    RUN_TEST(test_sum_by_pointer);
    return UNITY_END();
}
