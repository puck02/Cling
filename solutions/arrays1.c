#include "unity.h"

int find_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void setUp(void) {}
void tearDown(void) {}

void test_find_max(void) {
    int arr1[] = {1, 5, 3, 9, 2};
    TEST_ASSERT_EQUAL_INT(9, find_max(arr1, 5));
    
    int arr2[] = {-5, -1, -10, -3};
    TEST_ASSERT_EQUAL_INT(-1, find_max(arr2, 4));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_find_max);
    return UNITY_END();
}
