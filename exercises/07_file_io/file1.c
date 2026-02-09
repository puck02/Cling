#include "unity.h"
#include <stdio.h>
#include <string.h>

// 学习目标: 文件的基本读写
// fopen 打开文件, fclose 关闭文件
// fputs 写入字符串, fgets 读取一行

// TODO: 将字符串写入文件
// 步骤: 1. fopen(filename, "w") 以写模式打开
//       2. 检查是否打开成功（返回 NULL 表示失败）
//       3. fputs(content, file) 写入内容
//       4. fclose(file) 关闭文件
//       5. 返回 1 表示成功，0 表示失败
int write_to_file(const char *filename, const char *content) {
    // TODO: 在这里实现
    
}

// TODO: 从文件读取一行
// 步骤: 1. fopen(filename, "r") 以读模式打开
//       2. fgets(buffer, size, file) 读取一行
//       3. 移除末尾换行符（如果有）
//       4. fclose 关闭, 返回 1 成功 / 0 失败
int read_from_file(const char *filename, char *buffer, int size) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_write_and_read(void) {
    const char *filename = "test_file1.txt";
    const char *content = "Hello, File I/O!";

    int write_result = write_to_file(filename, content);
    TEST_ASSERT_EQUAL_INT(1, write_result);

    char buffer[100];
    int read_result = read_from_file(filename, buffer, 100);
    TEST_ASSERT_EQUAL_INT(1, read_result);
    TEST_ASSERT_EQUAL_STRING(content, buffer);

    remove(filename);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_write_and_read);
    return UNITY_END();
}
