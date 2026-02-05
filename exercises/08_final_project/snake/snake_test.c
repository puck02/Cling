#include "snake.h"
#include "unity.h"
#include <stdlib.h>
#include <time.h>

void setUp(void) {
    srand(time(NULL));
}

void tearDown(void) {}

// 测试1：创建节点
void test_snake_node_create(void) {
    SnakeNode *node = snake_node_create(5, 10);
    TEST_ASSERT_NOT_NULL(node);
    TEST_ASSERT_EQUAL_INT(5, node->pos.x);
    TEST_ASSERT_EQUAL_INT(10, node->pos.y);
    TEST_ASSERT_NULL(node->next);
    free(node);
}

// 测试2：插入头节点
void test_snake_insert_head(void) {
    Snake snake = {NULL, NULL, DIR_RIGHT, 0};
    
    snake_insert_head(&snake, 5, 5);
    TEST_ASSERT_NOT_NULL(snake.head);
    TEST_ASSERT_EQUAL_INT(5, snake.head->pos.x);
    TEST_ASSERT_EQUAL_INT(5, snake.head->pos.y);
    TEST_ASSERT_EQUAL_INT(1, snake.length);
    
    snake_insert_head(&snake, 6, 5);
    TEST_ASSERT_EQUAL_INT(6, snake.head->pos.x);
    TEST_ASSERT_EQUAL_INT(2, snake.length);
    
    snake_free(&snake);
}

// 测试3：删除尾节点
void test_snake_remove_tail(void) {
    Snake snake = {NULL, NULL, DIR_RIGHT, 0};
    
    snake_insert_head(&snake, 5, 5);
    snake_insert_head(&snake, 6, 5);
    snake_insert_head(&snake, 7, 5);
    
    TEST_ASSERT_EQUAL_INT(3, snake.length);
    
    snake_remove_tail(&snake);
    TEST_ASSERT_EQUAL_INT(2, snake.length);
    
    snake_free(&snake);
}

// 测试4：碰撞检测 - 撞墙
void test_snake_check_collision_wall(void) {
    Snake snake = {NULL, NULL, DIR_RIGHT, 0};
    
    snake_insert_head(&snake, 0, 0);
    TEST_ASSERT_FALSE(snake_check_collision(&snake, 10, 10));
    
    snake.head->pos.x = -1;
    TEST_ASSERT_TRUE(snake_check_collision(&snake, 10, 10));
    
    snake_free(&snake);
}

// 测试5：碰撞检测 - 自咬
void test_snake_check_collision_self(void) {
    Snake snake = {NULL, NULL, DIR_RIGHT, 0};
    
    snake_insert_head(&snake, 5, 5);
    snake_insert_head(&snake, 6, 5);
    snake_insert_head(&snake, 7, 5);
    snake_insert_head(&snake, 7, 6);
    snake_insert_head(&snake, 6, 6);
    snake_insert_head(&snake, 5, 6);
    
    // 头部移动到身体位置
    snake.head->pos.x = 5;
    snake.head->pos.y = 5;
    
    TEST_ASSERT_TRUE(snake_check_collision(&snake, 20, 20));
    
    snake_free(&snake);
}

// 测试6：食物生成
void test_food_generate(void) {
    Snake snake = {NULL, NULL, DIR_RIGHT, 0};
    snake_insert_head(&snake, 5, 5);
    
    Food food = {{0, 0}, false};
    food_generate(&food, &snake, 20, 20);
    
    TEST_ASSERT_TRUE(food.active);
    TEST_ASSERT_TRUE(food.pos.x >= 0 && food.pos.x < 20);
    TEST_ASSERT_TRUE(food.pos.y >= 0 && food.pos.y < 20);
    
    // 食物不应该在蛇身上
    TEST_ASSERT_FALSE(food.pos.x == 5 && food.pos.y == 5);
    
    snake_free(&snake);
}

// 测试7：蛇移动
void test_snake_move(void) {
    Snake snake = {NULL, NULL, DIR_RIGHT, 0};
    snake_insert_head(&snake, 5, 5);
    
    snake_move(&snake, DIR_RIGHT);
    TEST_ASSERT_EQUAL_INT(6, snake.head->pos.x);
    TEST_ASSERT_EQUAL_INT(5, snake.head->pos.y);
    
    snake_move(&snake, DIR_DOWN);
    TEST_ASSERT_EQUAL_INT(6, snake.head->pos.x);
    TEST_ASSERT_EQUAL_INT(6, snake.head->pos.y);
    
    snake_free(&snake);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_snake_node_create);
    RUN_TEST(test_snake_insert_head);
    RUN_TEST(test_snake_remove_tail);
    RUN_TEST(test_snake_check_collision_wall);
    RUN_TEST(test_snake_check_collision_self);
    RUN_TEST(test_food_generate);
    RUN_TEST(test_snake_move);
    return UNITY_END();
}
