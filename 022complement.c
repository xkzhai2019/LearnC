#include <stdio.h>

int main(void){

    int i = 0x80000000; 
    int i2 = 2147483648; 

    unsigned int i3 = 0x80000000;
    unsigned int i4 = 2147483648;

    printf("i = %d, i2 = %d\n",i,i2);// 有符号数按有符号输出
    printf("i3 = %d, i4 = %d\n",i3,i4);// 无符号数按有符号输出
    return 0;
}
