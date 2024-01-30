#include <stdio.h>
int main(void){
    
    float f1 = 0.00001;
    float f2 = 12.84;
    float f3 = 3E7;
    double d = 1.229338455;
    
    printf("f1=%f,f2=%f,f3=%f,d=%f\n",f1,f2,f3,d);
    printf("f1=%e,f2=%e,f3=%e,d=%e\n",f1,f2,f3,d);
    printf("f1=%g,f2=%g,f3=%g,d=%g\n",f1,f2,f3,d);
    return 0;
}
