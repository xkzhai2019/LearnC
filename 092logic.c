#include <stdio.h>

int main(void){
    printf("5&&0 = %d\n",5&&2);
    printf("(1>0) && (1<2) = %d\n",(1>0) && (1<2));
    printf("2||0 = %d\n",2||0);
    printf("(1>2) || (1>0) = %d\n",(1>2) || (1>0));
    printf("!0 = %d, !(-1) = %d\n", !0,!(-1));

    return 0;
}
