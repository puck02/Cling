#include "unity.h"
#include <stdio.h>
#include <string.h>

// TODO: 实现这个函数
// 从文件读取所有行，统计行数
// 使用feof检查文件末尾
int count_lines(const char *filename) {
    // TODO: 使用fopen, fgets, feof, fclose
    return 0;
}

// TODO: 实现这个函数
// 复制文件内容，并处理错误
// 使用ferror检查错误，使用clearerr清除错误状态
int copy_file(const char *src, const char *dest) {
    // TODO: 使用fopen, fgetc/fputc, ferror, clearerr, fclose
    return 0;
}

void setUp(void) {}
void tearDown(void) {}

void test_count_lines(void) {
    const char *filename = "test_file4.txt";
    
    // 创建测试文件
    FILE *file = fopen(filename, "w");
    fprintf(file, "line1\n");
    fprintf(file, "line2\n");
    fprintf(file, "line3\n");
    fclose(file);
    
    // 统计行数
    int lines = count_lines(filename);
    TEST_ASSERT_EQUAL_INT(3, lines);
    
    remove(filename);
}

void test_copy_file(void) {
    const char *src = "test_src.txt";
    const char *dest = "test_dest.txt";
    
    // 创建源文件
    FILE *file = fopen(src, "w");
    fprintf(file, "Hello, World!");
    fclose(file);
    
    // 复制文件
    int result = copy_file(src, dest);
    TEST_ASSERT_EQUAL_INT(1, result);
    
    // 验证内容
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
