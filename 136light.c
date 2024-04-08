#include <stdio.h>

int main(void){
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int a[10000] = {0};

    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
           if(j%i==0)
               //a[i] = a[i] ^ 1;
               a[j] = !a[j];
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]) printf("%d ",i);
    }

    return 0;
}
