#include <stdio.h>

int main(void){
    char c = 'A';
    int i = 1;
    double f = 3.14;

    printf("&c: %p, &i: %p, &f: %p\n",&c,&i,&f);
//  printf("sizeof(int):%lu\n",sizeof(int));
//  printf("sizeof(double):%lu\n",sizeof(double));

    return 0;
}
