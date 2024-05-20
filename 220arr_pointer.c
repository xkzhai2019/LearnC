#include <stdio.h>

int main(void){
    int arr[] = {99,15,100,888,252};
    int len = sizeof(arr) / sizeof(int);
    int *p = arr;
    printf("%d\n", *p++); // 99
    printf("%d\n", *(p++));// 15
    printf("%d\n", *++p); // 888
    printf("%d\n", *(++p));// 252
    printf("%d\n",(*p)++);// 252

    p = arr;
    for(int i=0;i<len;i++){
        printf("%d ",*(p+i));// 99 15 100 888 253
    }
    printf("\n");
    return 0;
}
