#include <stdio.h>
#define CON1(a,b) a##E##b 
#define CON2(a,b) a##b##01

int main(void){
    printf("%f\n",CON1(3.14,2));
    printf("%d\n",CON2(12,34));
    return 0;
}
