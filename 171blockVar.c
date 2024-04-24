#include <stdio.h>

int main(void){
    int n = 22; // main函数中的局部变量
    {
        int n = 44; // {}中的块级变量
        printf("block n: %d\n",n);
    }
    printf("main n: %d\n",n);
    return 0;
}
