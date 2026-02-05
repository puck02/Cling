#include "unity.h"
#include <stdlib.h>

int safe_dereference(int *ptr, int default_value) {
    if (ptr == NULL) {
        return default_value;
    }
    return *ptr;
}

int* find_element(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return &arr[i];
        }
    }
    return NULL;
}

void setUp(void) {}
void tearDown(void) {}

void test_safe_dereference(void) {
    int value = 42;
    TEST_ASSERT_EQUAL_INT(42, safe_dereference(&value, 0));
    TEST_ASSERT_EQUAL_INT(99, safe_dereference(NULL, 99));
}

void test_find_element(void) {
    int arr[] = {1, 2, 3, 4, 5};
    
    int *ptr = find_element(arr, 5, 3);
    TEST_ASSERT_NOT_NULL(ptr);
    TEST_ASSERT_EQUAL_INT(3, *ptr);
    
    ptr = find_element(arr, 5, 10);
    TEST_ASSERT_NULL(ptr);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_safe_dereference);
    RUN_TEST(test_find_element);
    return UNITY_END();
}
