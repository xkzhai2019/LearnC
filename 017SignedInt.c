#include <stdio.h>

int main(void){
    // 负数
    short s = -0b10; // 二进制负数
    int i = -017; // 八进制负数
    long l = -0xA; // 十六进制负数
    // 正数
    short s2 = +0b10; // 带+号二进制
    int i2 = +017; // 带+号八进制
    long l2 = 10; // 不带+号
    
    printf("s = %hd, i = %d, l = %ld; \n",s,i,l);
    printf("s2 = %hd, i2 = %d, l + l2 = %ld; \n",s2,i2,l+l2);
    return 0;
}
