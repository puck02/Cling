cmake_minimum_required(VERSION 3.10)

# 贪吃蛇测试
add_executable(snake_test 
    snake_test.c
    snake_logic.c
)
target_link_libraries(snake_test unity)

# 注意：完整的游戏需要实现UI和输入，这里只测试核心逻辑
