#include <stdio.h>

long long Func(int n){
    static long long ret = 1; // 定义静态变量
    ret  = ret * n;
    return ret;
}

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d!=%lld\n",i,Func(i)); // 计算1,...,n阶乘
    }
    //printf("%lld\n",ret);
    return 0;
}
