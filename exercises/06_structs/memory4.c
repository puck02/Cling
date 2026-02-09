#include "unity.h"
#include <stdlib.h>
#include <string.h>

// 学习目标: 实现自动扩容的动态字符串

typedef struct {
    char *data;      // 字符缓冲区
    int size;        // 已使用的字符数
    int capacity;    // 缓冲区总容量
} DynamicString;

DynamicString* create_dynamic_string(void) {
    DynamicString *ds = (DynamicString *)malloc(sizeof(DynamicString));
    ds->capacity = 8;
    ds->size = 0;
    ds->data = (char *)malloc(ds->capacity);
    return ds;
}

// TODO: 向动态字符串追加一个字符
// 如果 size >= capacity，需要先扩容（容量翻倍）
// 扩容: ds->data = realloc(ds->data, ds->capacity)
// 然后: ds->data[ds->size++] = c
void append_char(DynamicString *ds, char c) {
    // TODO: 在这里实现
    
}

// TODO: 释放动态字符串的所有内存
// 步骤: 1. free(ds->data)  2. free(ds)
void free_dynamic_string(DynamicString *ds) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_create_dynamic_string(void) {
    DynamicString *ds = create_dynamic_string();
    TEST_ASSERT_NOT_NULL(ds);
    TEST_ASSERT_NOT_NULL(ds->data);
    TEST_ASSERT_EQUAL_INT(0, ds->size);
    TEST_ASSERT_EQUAL_INT(8, ds->capacity);
    free_dynamic_string(ds);
}

void test_append_char(void) {
    DynamicString *ds = create_dynamic_string();

    append_char(ds, 'h');
    append_char(ds, 'e');
    append_char(ds, 'l');
    append_char(ds, 'l');
    append_char(ds, 'o');

    TEST_ASSERT_EQUAL_INT(5, ds->size);
    TEST_ASSERT_EQUAL_CHAR('h', ds->data[0]);
    TEST_ASSERT_EQUAL_CHAR('o', ds->data[4]);

    free_dynamic_string(ds);
}

void test_auto_expand(void) {
    DynamicString *ds = create_dynamic_string();

    for (int i = 0; i < 20; i++) {
        append_char(ds, 'a');
    }

    TEST_ASSERT_EQUAL_INT(20, ds->size);
    TEST_ASSERT_TRUE(ds->capacity >= 20);

    free_dynamic_string(ds);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_create_dynamic_string);
    RUN_TEST(test_append_char);
    RUN_TEST(test_auto_expand);
    return UNITY_END();
}
