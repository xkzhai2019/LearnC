#include <stdio.h>

int main(void){
    char c;
    short s_i;
    int i;
    float f = 70000;

    c = (char)f;
    s_i = (short)f;
    i = (int)f;

    printf("c: %d\n",c);
    printf("s_i: %d\n",s_i);
    printf("i: %d\n",i);
    printf("f_i: %f\n",f);

    return 0;
}
