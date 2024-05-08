#include <stdio.h>

int main(){
    if(_WIN32){
        system("color 0c");
        printf("Hello,C!\n");
    }else if(__linux__){
        printf("\033[22;31mHello,C!\n\033[22;30m");
    }else{
        printf("Hello,C!\n");
    }

    return 0;
}
