#include <stdio.h>

int main(void){
    #if _WIN32
    #error This Program is not supported at Windows
    #elif __linux__
        printf("\033[22;31mHello,C!\n\033[22;30m");
    #else
        printf("Hello,C!\n");
    #endif

    return 0;
}
