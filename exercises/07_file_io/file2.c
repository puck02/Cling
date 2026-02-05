#include "unity.h"
#include <stdio.h>

// TODO: 实现这个函数
// 使用fprintf写入格式化数据
// 写入：name, age, score (每个一行)
int write_student_data(const char *filename, const char *name, int age, double score) {
    // TODO: 使用fopen, fprintf, fclose
    return 0;
}

// TODO: 实现这个函数
// 使用fscanf读取格式化数据
// 读取：name, age, score
int read_student_data(const char *filename, char *name, int *age, double *score) {
    // TODO: 使用fopen, fscanf, fclose
    return 0;
}

void setUp(void) {}
void tearDown(void) {}

void test_write_and_read_formatted(void) {
    const char *filename = "test_file2.txt";
    
    // 写入
    int write_result = write_student_data(filename, "Alice", 20, 85.5);
    TEST_ASSERT_EQUAL_INT(1, write_result);
    
    // 读取
    char name[50];
    int age;
    double score;
    int read_result = read_student_data(filename, name, &age, &score);
    TEST_ASSERT_EQUAL_INT(1, read_result);
    TEST_ASSERT_EQUAL_STRING("Alice", name);
    TEST_ASSERT_EQUAL_INT(20, age);
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 85.5, score);
    
    // 清理
    remove(filename);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_write_and_read_formatted);
    return UNITY_END();
}
