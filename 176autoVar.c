#include <stdio.h>

long long Func(int n){
    auto long long ret; // 定义自动变量
    ret  = ret * n;
    return ret;
}

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d!=%lld\n",i,Func(i)); // 计算1,...,n阶乘
    }
    return 0;
}
