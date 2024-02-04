#include <stdio.h>

int main(void){
    long l = 100;
    int i = 295;
    long l2 = 0x100000000;
    int i2 = l2;

    float f = 52.5;
    double d = 18.6;

    printf("l: %ld, i: %d, l2: %ld, i2: %d\n",l,i,l2,i2);
    printf("f: %f, d: %f\n",f,d);

    return 0;
}
