#include <stdio.h>
// 计算斐波那契数
int fib(int n){
    // 终止条件
    /*
    if(n==1 || n==2) return 1;
    */
    return (n==1 || n==2) ? 1: fib(n-1) + fib(n-2);
}
int main(void){
    printf("fib(7)=%d\n",fib(7));
    return 0;
}
