#include <stdio.h>

int main(void){
    int i1 = 1, i2 = 2;
    scanf("i1=%d",&i1); 
    fflush(stdin);
    scanf("i2=%d",&i2);
    printf("i1=%d,i2=%d\n",i1,i2);

    return 0;
}
