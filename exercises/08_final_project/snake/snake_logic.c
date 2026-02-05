#include "snake.h"
#include <stdlib.h>

// TODO: 实现这8个函数来完成贪吃蛇游戏

// 1. 创建新的蛇节点
// 提示：使用 malloc 分配内存
SnakeNode* snake_node_create(int x, int y) {
    // TODO: 分配内存创建新节点
    // TODO: 设置节点的位置
    // TODO: 设置next指针为NULL
    return NULL;
}

// 2. 在蛇头插入新节点
// 提示：新节点应该成为新的头节点
void snake_insert_head(Snake *snake, int x, int y) {
    // TODO: 创建新节点
    // TODO: 让新节点的next指向当前头节点
    // TODO: 更新head指针
    // TODO: 如果是第一个节点，还要更新tail指针
    // TODO: 增加长度
}

// 3. 删除蛇尾节点
// 提示：需要遍历链表找到倒数第二个节点
void snake_remove_tail(Snake *snake) {
    // TODO: 处理空链表情况
    // TODO: 如果只有一个节点，特殊处理
    // TODO: 遍历找到倒数第二个节点
    // TODO: 释放尾节点的内存
    // TODO: 更新tail指针
    // TODO: 减少长度
}

// 4. 检查碰撞（撞墙或自咬）
// 提示：检查头节点的位置
bool snake_check_collision(Snake *snake, int width, int height) {
    if (snake == NULL || snake->head == NULL) {
        return false;
    }
    
    Position head_pos = snake->head->pos;
    
    // TODO: 检查是否撞墙
    // 如果x < 0 或 x >= width 或 y < 0 或 y >= height，返回true
    
    // TODO: 检查是否咬到自己
    // 遍历蛇身（从head->next开始），检查是否有节点位置与头部相同
    
    return false;
}

// 5. 移动蛇
// 提示：在头部插入新位置，在尾部删除（如果没吃到食物）
void snake_move(Snake *snake, Direction dir) {
    if (snake == NULL || snake->head == NULL) {
        return;
    }
    
    Position head_pos = snake->head->pos;
    int new_x = head_pos.x;
    int new_y = head_pos.y;
    
    // TODO: 根据方向计算新的头部位置
    // DIR_UP: y--
    // DIR_DOWN: y++
    // DIR_LEFT: x--
    // DIR_RIGHT: x++
    
    // TODO: 在新位置插入头节点
    
    // 注意：是否删除尾节点由game_update决定（吃到食物时不删除）
}

// 6. 生成食物
// 提示：随机生成位置，确保不在蛇身上
void food_generate(Food *food, Snake *snake, int width, int height) {
    if (food == NULL || snake == NULL) {
        return;
    }
    
    // TODO: 使用rand()生成随机位置
    // x = rand() % width
    // y = rand() % height
    
    // TODO: 检查该位置是否在蛇身上
    // 如果在，重新生成
    
    // TODO: 设置food的位置和active状态
}

// 7. 更新游戏状态
// 提示：这是核心函数，整合所有逻辑
void game_update(Game *game) {
    if (game == NULL || game->state != GAME_RUNNING) {
        return;
    }
    
    Snake *snake = game->snake;
    
    // TODO: 保存当前尾部位置（用于判断是否吃到食物）
    
    // TODO: 移动蛇
    
    // TODO: 检查碰撞
    // 如果碰撞，设置game->state = GAME_OVER并返回
    
    // TODO: 检查是否吃到食物
    // 如果头部位置与食物位置相同：
    //   - 增加分数
    //   - 不删除尾节点（蛇变长）
    //   - 生成新食物
    // 否则：
    //   - 删除尾节点
}

// 8. 释放蛇的内存
// 提示：遍历链表，释放所有节点
void snake_free(Snake *snake) {
    if (snake == NULL) {
        return;
    }
    
    // TODO: 遍历链表，释放所有节点
    SnakeNode *current = snake->head;
    // while (current != NULL) {
    //     保存next指针
    //     释放当前节点
    //     移动到下一个节点
    // }
    
    // 注意：不要释放Snake结构本身，因为它可能是栈上分配的
    // 只释放链表节点
}
