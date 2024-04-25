#include <stdio.h>
// 使用全局变量优化斐波那契数的计算
int fibArr[100];

int fib(int n){
    if(n<=1) return n;
    if(fibArr[n])
        return fibArr[n];
    return fibArr[n] = fib(n-1) + fib(n-2);
}
int main(void){
    printf("fib(7)=%d\n",fib(7));
    return 0;
}
