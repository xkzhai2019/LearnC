#include <stdio.h>
// 抽签问题
int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int l=0;l<n;l++){
                for(int k=0;k<n;k++){
                    if(a[i]+a[j]+a[l]+a[k]==m) flag = 1;
                }
            }
        }
    }
    if(flag) printf("Yes\n");
    else printf("no\n");
    return 0;
}
