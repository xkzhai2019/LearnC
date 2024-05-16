#include <stdio.h>
#define NUM1 30
#define NUM2 40

int main(void){
    #if (defined NUM1 && defined NUM2)//
    //#ifdef NUM1 && #ifdef NUM2
        printf("NUM1: %d,NUM2:%d\n", NUM1,NUM2);
    #else
        printf("NUM Error\n");
    #endif
    return 0;
}
