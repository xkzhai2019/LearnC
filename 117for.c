#include <stdio.h>

int main(void){
    int sum = 0;

    for(int i=1;i<=100;){
        sum += i;
        i++;
    }
    printf("1+2+...+100=%d\n",sum);

    return 0;
}