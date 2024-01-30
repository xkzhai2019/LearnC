#include <stdio.h>

int main(void){
    
    unsigned int a = 0x100000000;
    int b = 0xffffffff;

    b = 4294967295;
    printf("a=%u,b=%d\n",a,b);
    return 0;
}
