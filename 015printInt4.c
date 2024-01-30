#include <stdio.h>

int main(void){
    short s_int = 0b101101001; // 用二进制定义数据
    int n_int = 0107; // 用八进制定义数据
    long l_int = 0x18FF; // 用十六进制定义数据

    // 以八进制形式输出
    printf("s_int = %ho, n_int = %o, l_int = %lo; \n",s_int,n_int,l_int);
    // 以十进制形式输出
    printf("s_int = %hd, n_int = %d, l_int = %ld; \n",s_int,n_int,l_int);
    // 以十六进制形式（小写字母）输出
    printf("s_int = %hx, n_int = %x, l_int = %lx; \n",s_int,n_int,l_int);
    // 以十六进制形式（大写字母）输出
    printf("s_int = %hX, n_int = %X, l_int = %lX; \n",s_int,n_int,l_int);
    return 0;
}
