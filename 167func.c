#include <stdio.h>

// 计算阶乘，递归实现
int factorial(int n){
    printf("计算%d的阶乘\n",n);
    if(n==0 || n==1 ){
        return 1;
    }
    return n * factorial(n-1);
}
int main(void){
    printf("2!=%d\n",factorial(2));
    printf("3!=%d\n",factorial(3));
    printf("4!=%d\n",factorial(4));
    return 0;
}
