#include "unity.h"
#include <stdlib.h>

int* allocate_array(int size) {
    return (int *)malloc(size * sizeof(int));
}

void free_array(int *arr) {
    free(arr);
}

void setUp(void) {}
void tearDown(void) {}

void test_allocate_and_free(void) {
    int *arr = allocate_array(5);
    TEST_ASSERT_NOT_NULL(arr);
    
    arr[0] = 10;
    arr[4] = 50;
    TEST_ASSERT_EQUAL_INT(10, arr[0]);
    TEST_ASSERT_EQUAL_INT(50, arr[4]);
    
    free_array(arr);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_allocate_and_free);
    return UNITY_END();
}
