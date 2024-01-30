#include <stdio.h>

int main(){
    // 合法的二进制
    int a = 0b10;  // 表示十进制数2
    int b = -0B10; // 表示十进制数-2
    int c = 0B101; // 表示十进制数5

    // 非法的二进制
    int m = 101; // 无前缀，C语言将其解读为十进制数
//  int n = 0B40; // 二进制数不包含4

    printf("%d %d %d %d\n",a,b,c,m);
    return 0;
}

