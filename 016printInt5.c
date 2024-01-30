#include <stdio.h>

int main(void){
    short s = 0b101101001; // 用二进制定义数据
    int i = 0107; // 用八进制定义数据
    long l = 0x18FF; // 用十六进制定义数据

    printf("s = %#ho, i = %#o, l = %#lo; \n",s,i,l);// 以八进制形式输出
    printf("s = %#hd, i = %#d, l = %#ld; \n",s,i,l);// 以十进制形式输出
    printf("s = %#hx, i = %#x, l = %#lx; \n",s,i,l);// 以十六进制形式（小写字母）输出
    printf("s = %#hX, i = %#X, l = %#lX; \n",s,i,l);// 以十六进制形式（大写字母）输出
    return 0;
}
