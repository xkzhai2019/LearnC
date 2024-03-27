#include <stdio.h>

int main(void){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            printf("%-4d",i*j);
        }
        printf("\n");
    }

    return 0;
}
