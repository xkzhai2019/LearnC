#include <stdio.h>
#define NUM1 10
#define NUM2 20
int main(){
    #ifdef NUM1 && #ifdef NUM2
    //#if (defined NUM1 && defined NUM2)
    //#ifdef NUM1
    //    printf("NUM1: %d, NUM2: %d\n", NUM1, NUM2);
    //#elif define NUM2
        printf("NUM1: %d, NUM2: %d\n", NUM1, NUM2);
    #else
        printf("Error\n");
    #endif
    return 0;
}
