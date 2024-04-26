#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int tmp = a[0];
    for(int i=1;i<n;i++){
        a[i-1] = a[i];
    }
    a[n-1] = tmp;

    for(int j=0;j<n-1;j++){
        printf("%d ",a[j]);
    }
    printf("%d",a[n-1]);
    return 0;
}
