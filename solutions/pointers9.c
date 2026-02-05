#include "unity.h"
#include <stdlib.h>

int** allocate_2d_array(int rows, int cols) {
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) {
            arr[i][j] = 0;
        }
    }
    return arr;
}

void free_2d_array(int **arr, int rows) {
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
}

void setUp(void) {}
void tearDown(void) {}

void test_allocate_and_free_2d_array(void) {
    int **arr = allocate_2d_array(3, 4);
    TEST_ASSERT_NOT_NULL(arr);
    
    arr[0][0] = 1;
    arr[2][3] = 99;
    TEST_ASSERT_EQUAL_INT(1, arr[0][0]);
    TEST_ASSERT_EQUAL_INT(99, arr[2][3]);
    
    free_2d_array(arr, 3);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_allocate_and_free_2d_array);
    return UNITY_END();
}
