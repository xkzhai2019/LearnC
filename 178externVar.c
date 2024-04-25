#include <stdio.h>
//#include "179externVar.h"
extern float g_PI;
int main(void){
    printf("%f\n",g_PI);
    g_PI = 1.0;
    printf("%f\n",g_PI);
    return 0;
}
