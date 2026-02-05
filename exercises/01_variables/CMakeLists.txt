cmake_minimum_required(VERSION 3.10)

# variables1-2 - 编译验证
add_executable(variables1 variables1.c)
add_executable(variables2 variables2.c)

# variables3-8 - 单元测试
add_executable(variables3 variables3.c)
target_link_libraries(variables3 unity)

add_executable(variables4 variables4.c)
target_link_libraries(variables4 unity)

add_executable(variables5 variables5.c)
target_link_libraries(variables5 unity)

add_executable(variables6 variables6.c)
target_link_libraries(variables6 unity)

add_executable(variables7 variables7.c)
target_link_libraries(variables7 unity)

add_executable(variables8 variables8.c)
target_link_libraries(variables8 unity)
