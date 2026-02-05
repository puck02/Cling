cmake_minimum_required(VERSION 3.10)
project(cling C)

# 设置C标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 严格的编译选项
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic")

# 检测编译器
if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    message(STATUS "Using compiler: ${CMAKE_C_COMPILER_ID}")
else()
    message(WARNING "Unsupported compiler: ${CMAKE_C_COMPILER_ID}")
endif()

# Unity测试框架
add_library(unity STATIC
    tests/unity/unity.c
)
target_include_directories(unity PUBLIC tests/unity)

# 添加所有练习子目录
add_subdirectory(exercises/00_intro)
add_subdirectory(exercises/01_variables)
add_subdirectory(exercises/02_control_flow)
add_subdirectory(exercises/03_functions)
add_subdirectory(exercises/04_arrays)
add_subdirectory(exercises/05_pointers)
add_subdirectory(exercises/06_structs)
add_subdirectory(exercises/07_file_io)
add_subdirectory(exercises/08_final_project)

# 打印配置信息
message(STATUS "C Standard: ${CMAKE_C_STANDARD}")
message(STATUS "C Flags: ${CMAKE_C_FLAGS}")
