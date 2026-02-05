#include "unity.h"

// TODO: 定义Point结构体
// 包含两个int成员：x和y
typedef struct {
    int x;
    int y;
} Point;

// TODO: 实现函数，创建并返回一个Point
Point create_point(int x, int y) {
    Point p;
    // TODO: 设置p.x和p.y的值
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
