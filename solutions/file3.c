#include "unity.h"
#include <stdio.h>
#include <string.h>

int write_binary_array(const char *filename, int *arr, int size) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        return 0;
    }
    size_t written = fwrite(arr, sizeof(int), size, file);
    fclose(file);
    return (written == (size_t)size) ? 1 : 0;
}

int read_binary_array(const char *filename, int *arr, int size) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        return 0;
    }
    size_t read = fread(arr, sizeof(int), size, file);
    fclose(file);
    return (read == (size_t)size) ? 1 : 0;
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
