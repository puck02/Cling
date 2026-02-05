cmake_minimum_required(VERSION 3.10)

add_executable(if1 if1.c)
target_link_libraries(if1 unity)

add_executable(if2 if2.c)
target_link_libraries(if2 unity)

add_executable(switch1 switch1.c)
target_link_libraries(switch1 unity)

add_executable(loops1 loops1.c)
target_link_libraries(loops1 unity)

add_executable(loops2 loops2.c)
target_link_libraries(loops2 unity)

add_executable(loops3 loops3.c)
target_link_libraries(loops3 unity)

add_executable(loops4 loops4.c)
target_link_libraries(loops4 unity)

add_executable(loops5 loops5.c)
target_link_libraries(loops5 unity)
