#include <stdio.h>

int main(void){
    short s_int = 10;
    int n_int = 65536;
    long l_int = 9553665539;

    printf("s_int = %hd, n_int = %d, l_int = %ld; \n",s_int,n_int,l_int);
    printf("s_int = %d, n_int = %ld; \n",s_int,n_int);
    printf("n_int = %hd, l_int = %d. \n",n_int,l_int);
    return 0;
}
