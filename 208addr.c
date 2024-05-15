#include <stdio.h>

int main(void){
    int a = 10;
    int arr[] = {1,2,3,4};
    printf("%u %#X\n",&a,&a);
    printf("%p\n",&a);
    printf("%#X %#X\n",&arr[0],arr);
    return 0;
}
