#include "unity.h"
#include <stdlib.h>

// 学习目标: 通过指针访问结构体成员 (->)

typedef struct {
    int x;
    int y;
} Point;

// TODO: 创建并返回一个 Point
Point create_point(int x, int y) {
    // TODO: 在这里实现
    
}

// TODO: 计算两个点之间的曼哈顿距离
// 曼哈顿距离 = |x1-x2| + |y1-y2|
// 注意: 参数是指针，用 p1->x 访问成员
// 提示: 绝对值可以用 if 或三元运算符实现
int manhattan_distance(Point *p1, Point *p2) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_create_point(void) {
    Point p = create_point(3, 4);
    TEST_ASSERT_EQUAL_INT(3, p.x);
    TEST_ASSERT_EQUAL_INT(4, p.y);
}

void test_manhattan_distance(void) {
    Point p1 = {0, 0};
    Point p2 = {3, 4};
    TEST_ASSERT_EQUAL_INT(7, manhattan_distance(&p1, &p2));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_create_point);
    RUN_TEST(test_manhattan_distance);
    return UNITY_END();
}
