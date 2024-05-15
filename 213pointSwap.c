#include <stdio.h>

int main(void){
    int a = 10, b = 20;
    int *p_a = &a;
    int *p_b = &b;
    printf("a:%d,b:%d\n",a,b);
    int tmp = *p_a;
    *p_a = *p_b;
    *p_b = tmp;
    printf("a:%d,b:%d\n",a,b);

    return 0;
}
