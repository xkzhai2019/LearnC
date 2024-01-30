#include <stdio.h>

int main(void){
    // 合法的十六进制
    int a = 0X2A;  // 表示十进制数42
    int b = -0xA0; // 表示十进制数-160
    int c = 0xffff; // 表示十进制数65535

    // 非法的十六进制
//    int m = 5A; // 无前缀0，C语言将其解读为十进制数，但十进制数不包含A
//    int n = 0x1H; // 十六进制数不包含H

    printf("%d %d %d\n",a,b,c);
    return 0;
}

