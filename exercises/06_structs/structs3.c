#include "unity.h"
#include <string.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point top_left;
    Point bottom_right;
} Rectangle;

// TODO: 实现这个函数
// 创建一个矩形
Rectangle create_rectangle(int x1, int y1, int x2, int y2) {
    // TODO: 初始化嵌套结构体
    Rectangle rect = {{0, 0}, {0, 0}};
    return rect;
}

// TODO: 实现这个函数
// 计算矩形的面积
// 面积 = (x2 - x1) * (y2 - y1)
int rectangle_area(Rectangle *rect) {
    // TODO: 访问嵌套结构体成员
    return 0;
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
