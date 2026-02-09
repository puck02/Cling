#include "unity.h"
#include <stdio.h>
#include <string.h>

// 学习目标: 逐行读取和文件复制

// TODO: 统计文件的行数
// 提示: 用 fgets 循环读取，每读一行计数加1
int count_lines(const char *filename) {
    // TODO: 在这里实现
    
}

// TODO: 复制文件内容
// 从 src 逐字符读取 (fgetc)，写入 dest (fputc)
// 循环直到 fgetc 返回 EOF
int copy_file(const char *src, const char *dest) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_count_lines(void) {
    const char *filename = "test_file4.txt";

    FILE *file = fopen(filename, "w");
    fprintf(file, "line1\n");
    fprintf(file, "line2\n");
    fprintf(file, "line3\n");
    fclose(file);

    int lines = count_lines(filename);
    TEST_ASSERT_EQUAL_INT(3, lines);

    remove(filename);
}

void test_copy_file(void) {
    const char *src = "test_src.txt";
    const char *dest = "test_dest.txt";

    FILE *file = fopen(src, "w");
    fprintf(file, "Hello, World!");
    fclose(file);

    int result = copy_file(src, dest);
    TEST_ASSERT_EQUAL_INT(1, result);

    char buffer[100];
    file = fopen(dest, "r");
    fgets(buffer, 100, file);
    fclose(file);
    TEST_ASSERT_EQUAL_STRING("Hello, World!", buffer);

    remove(src);
    remove(dest);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_count_lines);
    RUN_TEST(test_copy_file);
    return UNITY_END();
}
