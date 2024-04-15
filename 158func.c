#include <stdio.h>
int sum(int m,int n){
    int ret=0;
    for(int i=m;i<=n;i++){
        ret += i;
    }
    return ret;
}

int main(void){
    int a = sum(1,100);
    printf("和为%d\n",a);
    return 0;
}
