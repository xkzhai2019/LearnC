#include <stdio.h>

int *func(){
    int n = 100;
    return &n;
}

int main(){
    int *p = func(), n;
    printf("usts\n");
    n = *p;
    printf("value = %d\n", n);
    return 0;
}
