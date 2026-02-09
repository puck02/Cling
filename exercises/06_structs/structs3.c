#include "unity.h"
#include <string.h>
#include <stdlib.h>

// 学习目标: 嵌套结构体

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point top_left;
    Point bottom_right;
} Rectangle;

Rectangle create_rectangle(int x1, int y1, int x2, int y2) {
    Rectangle rect = {{x1, y1}, {x2, y2}};
    return rect;
}

// TODO: 计算矩形的面积
// 面积 = 宽 * 高
// 宽 = |bottom_right.x - top_left.x|
// 高 = |bottom_right.y - top_left.y|
int rectangle_area(Rectangle *rect) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_create_rectangle(void) {
    Rectangle rect = create_rectangle(0, 0, 5, 3);
    TEST_ASSERT_EQUAL_INT(0, rect.top_left.x);
    TEST_ASSERT_EQUAL_INT(0, rect.top_left.y);
    TEST_ASSERT_EQUAL_INT(5, rect.bottom_right.x);
    TEST_ASSERT_EQUAL_INT(3, rect.bottom_right.y);
}

void test_rectangle_area(void) {
    Rectangle rect = {{0, 0}, {5, 3}};
    TEST_ASSERT_EQUAL_INT(15, rectangle_area(&rect));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_create_rectangle);
    RUN_TEST(test_rectangle_area);
    return UNITY_END();
}
