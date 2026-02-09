#include "unity.h"
#include <stdio.h>

// 学习目标: 格式化文件读写
// fprintf 格式化写入, fscanf 格式化读取

// TODO: 将学生数据格式化写入文件
// 每个字段一行: name, age, score
// 使用 fprintf(file, "%s\n", name) 等
int write_student_data(const char *filename, const char *name, int age, double score) {
    // TODO: 在这里实现
    
}

// TODO: 从文件读取学生数据
// 使用 fscanf(file, "%s", name) 等
int read_student_data(const char *filename, char *name, int *age, double *score) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_write_and_read_formatted(void) {
    const char *filename = "test_file2.txt";

    int write_result = write_student_data(filename, "Alice", 20, 85.5);
    TEST_ASSERT_EQUAL_INT(1, write_result);

    char name[50];
    int age;
    double score;
    int read_result = read_student_data(filename, name, &age, &score);
    TEST_ASSERT_EQUAL_INT(1, read_result);
    TEST_ASSERT_EQUAL_STRING("Alice", name);
    TEST_ASSERT_EQUAL_INT(20, age);
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 85.5, score);

    remove(filename);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_write_and_read_formatted);
    return UNITY_END();
}
