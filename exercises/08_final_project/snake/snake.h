#ifndef SNAKE_H
#define SNAKE_H

#include <stdbool.h>

// 方向枚举
typedef enum {
    DIR_UP,
    DIR_DOWN,
    DIR_LEFT,
    DIR_RIGHT
} Direction;

// 位置结构
typedef struct {
    int x;
    int y;
} Position;

// 蛇节点（链表）
typedef struct SnakeNode {
    Position pos;
    struct SnakeNode *next;
} SnakeNode;

// 蛇结构
typedef struct {
    SnakeNode *head;
    SnakeNode *tail;
    Direction direction;
    int length;
} Snake;

// 食物结构
typedef struct {
    Position pos;
    bool active;
} Food;

// 游戏状态
typedef enum {
    GAME_RUNNING,
    GAME_OVER,
    GAME_WIN,
    GAME_QUIT
} GameState;

// 游戏结构
typedef struct {
    Snake *snake;
    Food food;
    GameState state;
    int score;
    int width;
    int height;
} Game;

// ============================================================================
// 学生需要实现的函数（snake_logic.c）
// ============================================================================

// 1. 创建新的蛇节点
SnakeNode* snake_node_create(int x, int y);

// 2. 在蛇头插入新节点
void snake_insert_head(Snake *snake, int x, int y);

// 3. 删除蛇尾节点
void snake_remove_tail(Snake *snake);

// 4. 检查碰撞（撞墙或自咬）
bool snake_check_collision(Snake *snake, int width, int height);

// 5. 移动蛇
void snake_move(Snake *snake, Direction dir);

// 6. 生成食物
void food_generate(Food *food, Snake *snake, int width, int height);

// 7. 更新游戏状态
void game_update(Game *game);

// 8. 释放蛇的内存
void snake_free(Snake *snake);

// ============================================================================
// 框架提供的函数（已实现）
// ============================================================================

// 初始化游戏
Game* game_init(int width, int height);

// 渲染游戏画面
void game_render(Game *game);

// 处理输入
void game_handle_input(Game *game);

// 游戏主循环
void game_loop(Game *game);

// 清理游戏资源
void game_cleanup(Game *game);

#endif // SNAKE_H
