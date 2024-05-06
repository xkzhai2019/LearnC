#include <stdio.h>
#define Max(a,b) a>b?a:b

int main(void){
    int x=10,y=20;
    int max = Max(x,y);
    printf("max(x,y):%d\n",max);
    //printf("Max:%s\n",Max);
    return 0;
}
