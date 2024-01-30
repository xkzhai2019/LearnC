#include <stdio.h>

int main(void){

    char c1 = '1'; // 字符实体
    char c2 = '\61'; // 八进制转义字符
    char c3 = '\x31'; // 十六进制转义字符
    char c4 = 49; // 十进制ASCII码
    
    printf("c1: %c, c2: %c, c3: %c, c4: %c\n",c1,c2,c3,c4);
    return 0;
}
