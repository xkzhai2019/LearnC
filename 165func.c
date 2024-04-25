#include <stdio.h>

int sum(int m, int n);
/* 计算正整数m到n的和,函数声明
*/
int main(void){
    printf("1~100的和为%d\n",sum(1,100));
    return 0;
}

int sum(int m, int n){
    int ret = 0;
    int i;
    for(i=m;i<=n;i++){
        ret += i;
    }
    return ret;
}
