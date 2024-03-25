#include <stdio.h>

int main(void){
    int i = 101;
    while(i<=100){
        printf("while: i = %d\n",i);
        i++;
    }

    i = 101;
    do{
        printf("do-while: i = %d\n",i);
        i++;
    }while(i<=100);

    return 0;
}
