#include <stdio.h>

int main(void){
    int arr[] = {99,15,100,888,252};
    int *p = arr;
    int len = sizeof(p) / sizeof(int);
    for(int i=0;i<len;i++){
        printf("%d ", *(p+i));
    }
    printf("\n");
    return 0;
}
