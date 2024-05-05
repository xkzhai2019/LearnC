#include <stdio.h>
#define M a[i-1] + a[i-2]

int main(void){
    int a[100] = {0};
    a[1] = 1;
    a[2] = 1;
    int n = 10;
    for(int i=3;i<=n;i++){
        a[i] = M;
    }
    printf("斐波那契数列第5个数：%d\n",a[6]);
    return 0;
}
