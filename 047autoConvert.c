#include <stdio.h>

int main(void){
    char c;
    int i;
    float f;

    f = i = c = 'C';
    printf("c: %c, i: %d, f: %f\n",c,i,f);
    c = c + 1;
    i = f + 2*c;
    f = 2.0*c + i;
    printf("c: %c, i: %d, f: %f\n",c,i,f);
    c = 321; 
    printf("c: %c\n",c);
    c = 97.1;
    printf("c: %c\n",c);
    return 0;
}
