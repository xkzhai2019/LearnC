#include <stdio.h>
#define SQ(y) ((y)*(y))
int SQ_fun(int y){
    return ((y)*(y));
}

int main(void){
    printf("SQ_fun:\n");
    for(int i=1;i<=5;){
        printf("%d^2=%d\n",i-1,SQ_fun(i++));
    }
    printf("SQ_preDefine:\n");
    for(int i=1;i<=5;){
        printf("%d^2=%d\n",i-1,SQ(i++));
    }

    return 0;
}
