#include <stdio.h>

int main(void){
    int arr[3] = {10,20,30};
    for(int i=-2;i<=4;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("%d\n",arr[10000]);

    return 0;
}
