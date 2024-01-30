#include <stdio.h>

int main(void){
    int a = 10, b = 20, c = 30, d = 40;
    int a1 = ++a, b1 = b++, c1 = --c, d1 = d--;

    printf("a = %d, a1 = %d\n",a,a1); // 11, 11
    printf("b = %d, b1 = %d\n",b,b1); // 21, 20
    printf("c = %d, c1 = %d\n",c,c1); // 29, 29
    printf("d = %d, d1 = %d\n",d,d1); // 39, 40
    return 0;
}
