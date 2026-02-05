#include "unity.h"

// TODO: 实现这个函数
// 返回3x3矩阵中指定位置的元素
// matrix: 3x3矩阵, row: 行索引, col: 列索引
int get_matrix_element(int matrix[3][3], int row, int col) {
    // TODO: 使用matrix[row][col]访问
    return 0;
}

// TODO: 实现这个函数
// 计算3x3矩阵主对角线元素的和
// 主对角线：matrix[0][0] + matrix[1][1] + matrix[2][2]
int diagonal_sum(int matrix[3][3]) {
    // TODO: 实现
    return 0;
}

void setUp(void) {}
void tearDown(void) {}

void test_get_matrix_element(void) {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    TEST_ASSERT_EQUAL_INT(1, get_matrix_element(matrix, 0, 0));
    TEST_ASSERT_EQUAL_INT(5, get_matrix_element(matrix, 1, 1));
    TEST_ASSERT_EQUAL_INT(9, get_matrix_element(matrix, 2, 2));
    TEST_ASSERT_EQUAL_INT(6, get_matrix_element(matrix, 1, 2));
}

void test_diagonal_sum(void) {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    // 1 + 5 + 9 = 15
    TEST_ASSERT_EQUAL_INT(15, diagonal_sum(matrix));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_get_matrix_element);
    RUN_TEST(test_diagonal_sum);
    return UNITY_END();
}
