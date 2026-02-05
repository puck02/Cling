#include "unity.h"

void reverse_array(int *arr, int size) {
    int *left = arr;
    int *right = arr + size - 1;
    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

void copy_array(int *dest, int *src, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i);
    }
}

void setUp(void) {}
void tearDown(void) {}

void test_reverse_array(void) {
    int arr[] = {1, 2, 3, 4, 5};
    reverse_array(arr, 5);
    TEST_ASSERT_EQUAL_INT(5, arr[0]);
    TEST_ASSERT_EQUAL_INT(4, arr[1]);
    TEST_ASSERT_EQUAL_INT(3, arr[2]);
    TEST_ASSERT_EQUAL_INT(2, arr[3]);
    TEST_ASSERT_EQUAL_INT(1, arr[4]);
}

void test_copy_array(void) {
    int src[] = {1, 2, 3, 4, 5};
    int dest[5];
    copy_array(dest, src, 5);
    for (int i = 0; i < 5; i++) {
        TEST_ASSERT_EQUAL_INT(src[i], dest[i]);
    }
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_reverse_array);
    RUN_TEST(test_copy_array);
    return UNITY_END();
}
