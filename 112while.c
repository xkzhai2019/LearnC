#include <stdio.h>

int main(void){
    int sum = 0;
    int i = 1;
    do{
        sum += i;
        i++;
    }while(i<=100);
    printf("1+2+...+100=%d\n",sum);
    return 0;
}
