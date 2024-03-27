#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int count=0;// 记录因子个数
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1 || count==2){
        printf("%d是素数\n",n);
    }else{
        printf("%d不是素数\n",n);
    }
    return 0;
}
