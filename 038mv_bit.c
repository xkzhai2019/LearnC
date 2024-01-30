#include <stdio.h>

int main(void){

    printf("%d,%d\n",9<<3,(-9)<<3);// 72,-72
    printf("%d,%d\n",9>>3,(-9)>>3);// 1, -2
    printf("%d,%d\n",0x20000001<<3,0x80000000>>3); 
    // (2^29+1)<<3 = 8
    // -2^31 >> 3 = -2^28
    return 0;
}
