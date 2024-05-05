#include <stdio.h>
#define STR "hello,define;\n"
//#define PI 3.14E
#define PI 3.14

int main(void){
    float r = 1.0;
    printf(STR);
    printf("S:%f\n",PI*r*r);
    return 0;
}
