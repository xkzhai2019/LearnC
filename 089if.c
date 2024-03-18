#include <stdio.h>

int main(void){
    int a = 1, b = 0, c = 0;
    if(a){
        printf("a!=0\n");
    }
    if(b=c){
        printf("if(b=c)\n");
    }
    if(c=a){
        printf("a!=0\n");
    }

    return 0;
}
