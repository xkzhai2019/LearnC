#include <stdio.h>

int main(void){
    
    unsigned short s = 0xffff; // 十六进制
    //unsigned int i = 0x80000000; // 十六进制
    // 2^31
    // 1000 0000 0000 0000 0000 0000 0000 0000
    //unsigned int i = -0x80000000; // 十六进制 
    // -2^31
    // 补码：1000 0000 0000 0000 0000 0000 0000 0000
    unsigned int i = -0x80000001; // 十六进制
    // -(2^31+1)
    // 1 1000 0000 0000 0000 0000 0000 0000 0001
    // 1 0111 1111 1111 1111 1111 1111 1111 1110
    // 1 0111 1111 1111 1111 1111 1111 1111 1111

    unsigned long l = 100; // 十进制
    printf("s = %#hx, i = %#x, l = %ld; \n",s,i,l);
    
    short s2 = 0100; // 八进制
    int i2 = -0x1; // 十六进制
    long l2 = 100; // 十进制
    printf("s2 = %#ho, i = %#x, l = %lu; \n",s2,i2,l2);

    return 0;
}
