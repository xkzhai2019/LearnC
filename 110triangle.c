#include <stdio.h>

int main(void){
    int i = 1;
    int j;
    while(i<=10){
        j = 1;
        while(j<=11-i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
