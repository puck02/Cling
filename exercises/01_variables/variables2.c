#include <stdio.h>

// TODO: 给未初始化的变量赋值
// 学习目标: 理解变量必须先初始化才能使用

int main(void) {
    int x;       // 已声明但未初始化
    int y;       // 已声明但未初始化

    // TODO: 给 x 赋值为 10，给 y 赋值为 20

    
    printf("x + y = %d\n", x + y);
    return 0;
}
