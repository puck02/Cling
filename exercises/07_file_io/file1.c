#include "unity.h"
#include <stdio.h>
#include <string.h>

// TODO: 实现这个函数
// 将字符串写入文件
// filename: 文件名, content: 要写入的内容
// 返回：成功返回1，失败返回0
int write_to_file(const char *filename, const char *content) {
    // TODO: 使用fopen, fputs/fprintf, fclose
    return 0;
}

// TODO: 实现这个函数
// 从文件读取一行内容
// filename: 文件名, buffer: 缓冲区, size: 缓冲区大小
// 返回：成功返回1，失败返回0
int read_from_file(const char *filename, char *buffer, int size) {
    // TODO: 使用fopen, fgets, fclose
    return 0;
}

void setUp(void) {}
void tearDown(void) {}

void test_write_and_read(void) {
    const char *filename = "test_file1.txt";
    const char *content = "Hello, File I/O!";
    
    // 写入文件
    int write_result = write_to_file(filename, content);
    TEST_ASSERT_EQUAL_INT(1, write_result);
    
    // 读取文件
    char buffer[100];
    int read_result = read_from_file(filename, buffer, 100);
    TEST_ASSERT_EQUAL_INT(1, read_result);
    TEST_ASSERT_EQUAL_STRING(content, buffer);
    
    // 清理
    remove(filename);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_write_and_read);
    return UNITY_END();
}
