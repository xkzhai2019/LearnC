#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(void){
    int a = 10, b = 20;
    printf("交换前：a = %d, b = %d\n",a,b);
    swap(&a,&b);
    printf("交换后：a = %d, b = %d\n",a,b);
    return 0;
}
