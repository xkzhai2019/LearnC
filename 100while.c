#include <stdio.h>

int main(void){
    int sum = 0;
    int i = 1;
    while(i<=100){
        sum += i;
        i++;
    }
    printf("1+2+...+100 = %d\n",sum);

    return 0;
}
