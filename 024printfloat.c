#include <stdio.h>
int main(void){
    
    float f1 = 0.302;
    float f2 = 128.101;
    float f3 = 112.64E3;
    double d1 = 123;
    double d2 = -0.7623e-2;
    long double ld = 0.0000525; 
    
    printf("f1=%f,f2=%f,f3=%E\n",f1,f2,f3);
    printf("f1=%le,f2=%lf,f3=%lE\n",f1,f2,f3);
    printf("d1=%f, d2=%e, ld=%lf\n",d1,d2,ld);
    printf("d1=%lf, d2=%le, ld=%LE\n",d1,d2,ld);
    return 0;
}
