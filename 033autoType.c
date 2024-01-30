#include <stdio.h>

int main(void){
    int a = 12;
    int b = 10;
    float c = 10.0;
    double d = a / b;
    double f = 1;

    printf("a: %d, b: %d, c: %f\n",a,b,c);
    printf("a_add_b = %d, a_sub_b = %d\n",a+b,a-b);
    printf("a_mul_b = %d, a_mul_c = %f\n",a*b,a*c);
    printf("a_div_b = %f, a_div_c = %f\n",d,a/c);
    printf("a_div_b = %f, f = %f\n",a/b,f);
    printf("1 = %f\n",1);
    return 0;
}
