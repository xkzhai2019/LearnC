#include <stdio.h>

int factorial(int n); // 计算n!
int sum(int n); // 计算1! + 2! + ... + n!

int main(void){
    printf("1!+2!+...+10!=%d\n",sum(10));
    return 0;
}

int factorial(int n){
    int ret = 1;
    for(int i=1;i<=n;i++){
        ret *= i;
    }
    return ret;
}

int sum(int n){
    int ret = 0;
    for(int i=1;i<=n;i++){
        ret += factorial(i);
    }
    return ret;
}
