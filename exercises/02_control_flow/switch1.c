#include "unity.h"

typedef enum {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} DayOfWeek;

// 学习目标: 使用 switch 语句

// TODO: 判断是否是工作日
// 工作日 (MONDAY ~ FRIDAY) 返回 1
// 周末 (SATURDAY, SUNDAY) 返回 0
// 提示: 用 switch + case，别忘了 break 和 default
int is_weekday(DayOfWeek day) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_weekdays(void) {
    TEST_ASSERT_EQUAL_INT(1, is_weekday(MONDAY));
    TEST_ASSERT_EQUAL_INT(1, is_weekday(WEDNESDAY));
    TEST_ASSERT_EQUAL_INT(1, is_weekday(FRIDAY));
}

void test_weekend(void) {
    TEST_ASSERT_EQUAL_INT(0, is_weekday(SATURDAY));
    TEST_ASSERT_EQUAL_INT(0, is_weekday(SUNDAY));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_weekdays);
    RUN_TEST(test_weekend);
    return UNITY_END();
}
