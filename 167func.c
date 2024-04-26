#include <stdio.h>
// 计算阶乘，递归实现
long long factorial(int n){
    /*
    if(n==0 || n==1 ){
        return 1;
    }
    */
    return (n==0) ? 1 : n * factorial(n-1);
}
int main(void){
  //  printf("2!=%d\n",factorial(2));
  //  printf("3!=%d\n",factorial(3));
    printf("5!=%lld\n",factorial(5));
    printf("100000000!=%lld\n",factorial(100000000));
    return 0;
}
