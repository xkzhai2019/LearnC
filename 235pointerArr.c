#include <stdio.h>

int main(void){
    int a = 10, b = 20, c = 30;
    int *arr[3] = {&a,&b,&c};
    //int *arr[] = {&a,&b,&c};
    int **parr = arr;//指向指针数组的指针
    printf("%d, %d, %d\n",*arr[0],*arr[1],*arr[2]);
    printf("%d, %d, %d\n",**parr,**(parr+1),**(parr+2));
    return 0;
}
