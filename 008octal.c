#include <stdio.h>

int main(){
    // 合法的八进制
    int a = 015;  // 表示十进制数13
    int b = -0101; // 表示十进制数-65
    int c = 017; // 表示十进制数15

    // 非法的八进制
    int m = 256; // 无前缀0，C语言将其解读为十进制数
//    int n = 091; // 八进制数不包含9

    printf("%d %d %d %d\n",a,b,c,m);
    return 0;
}

