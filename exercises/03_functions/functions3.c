#include "unity.h"
#include <stdbool.h>

// 学习目标: 理解函数声明（原型）与函数定义的分离
// 函数声明告诉编译器函数的签名，定义提供实现
// 声明放在调用之前，定义可以放在文件末尾

// TODO: 在这里写 is_even 函数的声明（原型）
// 格式: bool is_even(int n);


void setUp(void) {}
void tearDown(void) {}

void test_is_even(void) {
    TEST_ASSERT_TRUE(is_even(4));
    TEST_ASSERT_FALSE(is_even(5));
    TEST_ASSERT_TRUE(is_even(0));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_is_even);
    return UNITY_END();
}

// TODO: 在这里定义 is_even 函数
// 如果 n 是偶数返回 true，否则返回 false
// 提示: 使用 % 运算符

