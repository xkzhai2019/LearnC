#include <stdio.h>

int main(void){
    int i1 = 123, i2 = -456;
    double f = 3.1415926;

    printf("i1: %9d, i1: %-9d\n",i1,i1);
    printf("i1: %+d, i2: %+d\n",i1,i2);
    printf("i1: % d, i2: % d\n",i1,i2);
    printf("i1: %#o, i2: %#x\n",i1,i2);
    printf("f: %.0f, i2: %#.0f\n",f,f);
    
    return 0;
}
