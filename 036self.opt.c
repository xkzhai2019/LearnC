#include <stdio.h>

int main(void){
    int a = 10, b  = 1;
    int c = a - (b--);// 后自减的优先级低于括号
    int d = (++a) - (--b); // 先自增/自减的优先级大于括号
    int e = (a++) - (--b); // 13

    printf("a = %d, b = %d\n",a,b); // 12, -2
    printf("c = %d, d = %d, e = %d\n",c,d,e); // 9, 12, 13
    return 0;
}
