#include <stdio.h>

int main(void){
    int a = 15;
    int *p = &a;
    printf("%d %d\n",a,*p);
    return 0;
}
