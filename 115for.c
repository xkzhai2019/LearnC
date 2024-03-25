#include <stdio.h>

int main(void){
    int sum = 0;
    int i = 1;
    for(;i<=100;i++){
        sum += i;
    }
    printf("1+2+...+100=%d\n",sum);

    return 0;
}
