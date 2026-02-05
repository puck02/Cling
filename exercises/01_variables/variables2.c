#include <stdio.h>

// TODO: 修复变量声明和初始化
// 提示：未初始化的变量包含不确定的值

int main(void) {
    int x;  // 声明但未初始化
    int y = 20;
    
    // 这里使用了未初始化的变量x - 这是错误的！
    printf("x + y = %d\n", x + y);
    
    
    return 0;
}
