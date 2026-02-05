cmake_minimum_required(VERSION 3.10)

add_executable(file1 file1.c)
target_link_libraries(file1 unity)

add_executable(file2 file2.c)
target_link_libraries(file2 unity)

add_executable(file3 file3.c)
target_link_libraries(file3 unity)

add_executable(file4 file4.c)
target_link_libraries(file4 unity)
