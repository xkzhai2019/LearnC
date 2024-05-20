#include <stdio.h>

int main(void){
    int arr[] = {99,15,100,888,252};
    int len = sizeof(arr) / sizeof(int);
    int *p = arr;
    for(int i=0;i<len;i++){
        printf("%d ", *(p+i));
        //printf("%d ", *(arr+i));
    }
    printf("\n");
    return 0;
}
