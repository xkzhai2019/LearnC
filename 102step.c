#include <stdio.h>

// 计算n的阶乘
int factor(int n){
    int ret = 1;
    int i = 0;
    while(i<=n){
        ret *= i;
        i++;
    }
    if(n==0) ret = 1;
    return ret; 
}

int myfunc(int num){
    int sum = 0;
    int i = 0;
    while(i<=num){
        sum += factor(i);
        i++;
    }
    return sum;
}

int main(void){
    int num = 0;
    scanf("%d",&num);
    int ret = myfunc(num);// 计算0!+1!+2!+...+num!
    printf("%d\n",ret);
    return 0;
}
