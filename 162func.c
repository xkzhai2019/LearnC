#include <stdio.h>
// 计算m加到n的值
int sum(int m,int n){
    int i;
    for(i = m + 1; i<=n; i++){
        m += i;
    }
    return m;
}

int main(void){
    int m,n,ret;
    printf("请输入两个数：");
    scanf("%d %d",&m,&n);
    printf("m=%d,n=%d\n",m,n);
    ret = sum(m,n);
    printf("m=%d,n=%d\n",m,n);
    printf("ret=%d\n",ret);
    return 0;
}
