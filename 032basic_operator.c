#include <stdio.h>

int main(void){
    int a = 12;
    int b = 10;
    
    int m = a + b; // 22
    int n = a - b; // 2
    int l = a * b; // 120
    float p = a / b; // 1.0
    int q = a % b; // 2

    printf("a_add_b = %d, a_sub_b = %d\n",m,n);
    printf("a_mul_b = %d, a_div_b = %f\n",l,p);
    printf("a_rem_b = %d, a_div_10.0 = %f\n",q,a/10.0);
    printf("a_div_0 = %f\n",a/0.0);
    printf("0_div_0 = %f\n",0.0/0.0);
    return 0;
}
