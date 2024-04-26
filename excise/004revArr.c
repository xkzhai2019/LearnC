#include <stdio.h>

int main(void){
    int a[100] = {0};
    int c;
    int i=0;
    while(scanf("%d",&c)==1){
        a[i] = c;
        i++;  
    }
    for(int j=i-1;j>0;j--){
        printf("%d ",a[j]);
    }
    printf("%d\n",a[0]);
    return 0;
}
