#include "unity.h"

// 学习目标: 理解 do-while 循环
// do-while 至少执行一次循环体，然后检查条件

// TODO: 使用 do-while 循环，从 start 加到 end（包含 end）
// 例如: sum_range(1, 5) = 1+2+3+4+5 = 15
int sum_range(int start, int end) {
    // TODO: 在这里实现
    
}

// TODO: 计算一个数的各位数字之和
// 例如: sum_digits(123) = 1 + 2 + 3 = 6
// 特殊: sum_digits(0) = 0
// 提示: 用 n % 10 取最后一位，用 n / 10 去掉最后一位
// 使用 do-while 确保 0 也能正确处理
int sum_digits(int n) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_sum_range(void) {
    TEST_ASSERT_EQUAL_INT(15, sum_range(1, 5));
    TEST_ASSERT_EQUAL_INT(39, sum_range(4, 9));
    TEST_ASSERT_EQUAL_INT(5, sum_range(5, 5));
}

void test_sum_digits(void) {
    TEST_ASSERT_EQUAL_INT(6, sum_digits(123));
    TEST_ASSERT_EQUAL_INT(10, sum_digits(1234));
    TEST_ASSERT_EQUAL_INT(1, sum_digits(1));
    TEST_ASSERT_EQUAL_INT(0, sum_digits(0));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_range);
    RUN_TEST(test_sum_digits);
    return UNITY_END();
}
