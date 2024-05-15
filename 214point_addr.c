#include <stdio.h>

int main(void){
    int a = 10, b = 20;
    int *p_a = &a;
    int *p_b = &b;
    printf("*&a:%d, *p_a:%d\n",*&a,*p_a);
    printf("&*p_b:%#X, &b: %#X\n",&*p_b,&b);
    return 0;
}
