#include <stdio.h>

int main(void){
    int n;
    printf("输入数组的长度：");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        arr[i] = i;
        printf("%d ", arr[i]);
    }

    return 0;
}
