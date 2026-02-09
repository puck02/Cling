#include "unity.h"
#include <stdio.h>
#include <string.h>

// 学习目标: 二进制文件读写
// fwrite 写入二进制数据, fread 读取二进制数据

// TODO: 将整数数组以二进制格式写入文件
// 步骤: 1. fopen(filename, "wb") 以二进制写模式打开
//       2. fwrite(arr, sizeof(int), size, file) 写入
//       3. fclose, 返回 1 成功 / 0 失败
int write_binary_array(const char *filename, int *arr, int size) {
    // TODO: 在这里实现
    
}

// TODO: 从二进制文件读取整数数组
// 使用 fread(arr, sizeof(int), size, file)
int read_binary_array(const char *filename, int *arr, int size) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_binary_io(void) {
    const char *filename = "test_file3.bin";
    int write_arr[] = {1, 2, 3, 4, 5};
    int read_arr[5];

    int write_result = write_binary_array(filename, write_arr, 5);
    TEST_ASSERT_EQUAL_INT(1, write_result);

    int read_result = read_binary_array(filename, read_arr, 5);
    TEST_ASSERT_EQUAL_INT(1, read_result);

    for (int i = 0; i < 5; i++) {
        TEST_ASSERT_EQUAL_INT(write_arr[i], read_arr[i]);
    }

    remove(filename);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_binary_io);
    return UNITY_END();
}
