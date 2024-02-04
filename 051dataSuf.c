#include <stdio.h>

int main(void){
    long l = -1;
    short s1 = 65535u;
    unsigned short s2 = -1L;
    long l2 = -1U;

    float f = 52.5f;
    double d = 18.6F;

    printf("l: %ld, s1: %d, s2: %u, l2: %ld\n",l,s1,s2,l2);
    printf("f: %f, d: %f\n",f,d);

    return 0;
}
