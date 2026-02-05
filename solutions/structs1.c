#include "unity.h"

typedef struct {
    int x;
    int y;
} Point;

Point create_point(int x, int y) {
    Point p;
    p.x = x;
    p.y = y;
    return p;
}

void setUp(void) {}
void tearDown(void) {}

void test_create_point(void) {
    Point p = create_point(3, 4);
    TEST_ASSERT_EQUAL_INT(3, p.x);
    TEST_ASSERT_EQUAL_INT(4, p.y);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_create_point);
    return UNITY_END();
}
