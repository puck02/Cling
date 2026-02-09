#include "unity.h"

// 学习目标: 定义结构体和创建结构体实例

// TODO: 定义一个 Point 结构体，包含两个 int 成员: x 和 y
// 格式: typedef struct { ... } Point;


// TODO: 创建并返回一个 Point
// 设置 p.x = x, p.y = y，然后返回 p
Point create_point(int x, int y) {
    // TODO: 在这里实现
    
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
