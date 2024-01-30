#include <stdio.h>

int main(void){

    char c1 = '\333';
    char c2 = '\r';
    char c3 = '\n';

    printf("c1: %c\n",c1);
    printf("c2: %c\n",c2);
    printf("c3: %c\n",c3);
    printf("c1: %c, c2: %c, c3: %c",c1,c2,c3);
    return 0;
}
