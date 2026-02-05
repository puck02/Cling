#include "snake.h"
#include <stdlib.h>
#include <string.h>

// 学生实现的函数（标准答案）

SnakeNode* snake_node_create(int x, int y) {
    SnakeNode *node = (SnakeNode*)malloc(sizeof(SnakeNode));
    if (node == NULL) {
        return NULL;
    }
    node->pos.x = x;
    node->pos.y = y;
    node->next = NULL;
    return node;
}

void snake_insert_head(Snake *snake, int x, int y) {
    if (snake == NULL) {
        return;
    }
    
    SnakeNode *new_head = snake_node_create(x, y);
    if (new_head == NULL) {
        return;
    }
    
    new_head->next = snake->head;
    snake->head = new_head;
    
    if (snake->tail == NULL) {
        snake->tail = new_head;
    }
    
    snake->length++;
}

void snake_remove_tail(Snake *snake) {
    if (snake == NULL || snake->head == NULL) {
        return;
    }
    
    if (snake->head == snake->tail) {
        free(snake->head);
        snake->head = NULL;
        snake->tail = NULL;
        snake->length = 0;
        return;
    }
    
    SnakeNode *current = snake->head;
    while (current->next != snake->tail) {
        current = current->next;
    }
    
    free(snake->tail);
    snake->tail = current;
    current->next = NULL;
    snake->length--;
}

bool snake_check_collision(Snake *snake, int width, int height) {
    if (snake == NULL || snake->head == NULL) {
        return false;
    }
    
    Position head_pos = snake->head->pos;
    
    // 检查撞墙
    if (head_pos.x < 0 || head_pos.x >= width || 
        head_pos.y < 0 || head_pos.y >= height) {
        return true;
    }
    
    // 检查自咬
    SnakeNode *current = snake->head->next;
    while (current != NULL) {
        if (current->pos.x == head_pos.x && current->pos.y == head_pos.y) {
            return true;
        }
        current = current->next;
    }
    
    return false;
}

void snake_move(Snake *snake, Direction dir) {
    if (snake == NULL || snake->head == NULL) {
        return;
    }
    
    Position head_pos = snake->head->pos;
    int new_x = head_pos.x;
    int new_y = head_pos.y;
    
    switch (dir) {
        case DIR_UP:    new_y--; break;
        case DIR_DOWN:  new_y++; break;
        case DIR_LEFT:  new_x--; break;
        case DIR_RIGHT: new_x++; break;
    }
    
    snake_insert_head(snake, new_x, new_y);
}

void food_generate(Food *food, Snake *snake, int width, int height) {
    if (food == NULL || snake == NULL) {
        return;
    }
    
    bool valid = false;
    while (!valid) {
        food->pos.x = rand() % width;
        food->pos.y = rand() % height;
        
        valid = true;
        SnakeNode *current = snake->head;
        while (current != NULL) {
            if (current->pos.x == food->pos.x && current->pos.y == food->pos.y) {
                valid = false;
                break;
            }
            current = current->next;
        }
    }
    
    food->active = true;
}

void game_update(Game *game) {
    if (game == NULL || game->state != GAME_RUNNING) {
        return;
    }
    
    Snake *snake = game->snake;
    bool ate_food = false;
    
    snake_move(snake, snake->direction);
    
    if (snake_check_collision(snake, game->width, game->height)) {
        game->state = GAME_OVER;
        return;
    }
    
    if (game->food.active && 
        snake->head->pos.x == game->food.pos.x && 
        snake->head->pos.y == game->food.pos.y) {
        game->score += 10;
        game->food.active = false;
        ate_food = true;
        food_generate(&game->food, snake, game->width, game->height);
    }
    
    if (!ate_food) {
        snake_remove_tail(snake);
    }
}

void snake_free(Snake *snake) {
    if (snake == NULL) {
        return;
    }
    
    SnakeNode *current = snake->head;
    while (current != NULL) {
        SnakeNode *next = current->next;
        free(current);
        current = next;
    }
    
    // 不要释放Snake结构本身，因为它可能是栈上分配的
    // 如果Snake是malloc分配的，调用者负责释放
}
