#include <stdio.h>

int main(void){
    int m = 1;
    for(int i = 1; i<3; i++){
        for(int j=3;j>0;j--){
            if(i*j>3){
                break;
            }
            m *= i*j;
        }
    }
    printf("m=%d\n",m);
    return 0;
}
