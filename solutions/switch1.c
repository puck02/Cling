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

int is_weekday(DayOfWeek day) {
    switch (day) {
        case MONDAY:
        case TUESDAY:
        case WEDNESDAY:
        case THURSDAY:
        case FRIDAY:
            return 1;
        case SATURDAY:
        case SUNDAY:
            return 0;
        default:
            return 0;
    }
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
