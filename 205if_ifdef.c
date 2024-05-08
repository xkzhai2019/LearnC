#include <stdio.h>
#define NUM 10

int main(void){
    #if NUM == 10 || NUM == 20
        printf("NUM: %d\n", NUM);
    #else
        printf("NUM Error\n");
    #endif
    return 0;
}
