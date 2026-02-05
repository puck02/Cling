# Final Project: Snake Game 🐍

恭喜来到最终项目！

## 项目概述

使用链表实现经典贪吃蛇游戏。这个项目综合运用了前面学到的所有知识点：
- 结构体和typedef
- 链表（动态内存分配）
- 指针操作
- 函数设计
- 所有基础语法

## 你需要实现的函数

在 `snake_logic.c` 中实现以下8个函数：

1. **snake_node_create()** - 创建新链表节点
2. **snake_insert_head()** - 在链表头插入节点
3. **snake_remove_tail()** - 删除链表尾节点
4. **snake_check_collision()** - 碰撞检测
5. **snake_move()** - 移动蛇
6. **food_generate()** - 生成食物
7. **game_update()** - 更新游戏状态
8. **snake_free()** - 释放内存

## 数据结构

查看 `snake.h` 了解完整的数据结构定义。

关键结构：
- `SnakeNode`: 链表节点（蛇身的一节）
- `Snake`: 蛇（链表头尾指针）
- `Food`: 食物位置
- `Game`: 游戏状态

## 测试

运行测试验证你的实现：

```bash
mkdir build && cd build
cmake ..
make snake_test
./exercises/08_final_project/snake/snake_test
```

## 提示

1. 链表操作要小心：始终检查NULL指针
2. 移动蛇 = 在头部插入 + 在尾部删除（如果没吃到食物）
3. 吃到食物时不删除尾部，蛇就变长了
4. 记得释放所有分配的内存
5. 测试每个函数单独运行

## 扩展（可选）

完成基础功能后，可以尝试：
- 实现完整的UI渲染
- 添加键盘输入处理
- 实现游戏主循环
- 添加难度级别
- 保存最高分到文件

加油！你一定可以的！ 🚀
