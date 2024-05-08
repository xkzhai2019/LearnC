#include <stdio.h>

int main(void){
    #ifdef _WIN32
    //#if _WIN32
        printf("This is Windows!\n");
    #else
        printf("Unknown platform!\n");
    #endif
   
    #ifdef __linux__
    //#if __linux__
        printf("This is Linux!\n");
    #endif

    return 0;
}
