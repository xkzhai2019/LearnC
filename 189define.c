#include <stdio.h>

#define PI 3.14
float S(float r){
    return PI*r*r;
}
#undef PI

int main(void){
    float r = 1.0;
    printf("S:%f\n",S(r));
//  printf("S:%f\n",PI*r*r);
    return 0;
}
