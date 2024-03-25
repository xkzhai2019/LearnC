#include <stdio.h>

int main(void){
    int i = 1;
    int j = 1;
    while(i<=9){
        j = 1;
        while(j<=i){
            printf("%d x %d = %d\t", i, j, i*j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
