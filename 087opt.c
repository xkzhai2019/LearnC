#include <stdio.h>

int main(void){
    int a = 1, b = 0, c=2;
    printf("a>b = %d\n",a>b);
    printf("a<b = %d\n",a<b);
    printf("(--a)>b = %d\n",(--a)>b);
    printf("a==(b>c) = %d\n",a==(b>c));

    return 0;
}
