#include <stdio.h>

// 在main函数外部定义变量
int n = 100;
char c = 'A';

int main(void){
    // 在main函数内部定义变量
    float f = 0.5;

    printf("n: %d, c: %c, f: %f\n",n,c,f);
    return 0;
}
