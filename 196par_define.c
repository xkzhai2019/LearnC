#include <stdio.h>
#define SQ(y) (y)*(y)

int main(void){
    int a = 10;
    int sq = SQ(a+1);
    printf("sq=%d\n",sq);
    int ssq = 121 / SQ(a+1);
    printf("ssq=%d\n",ssq);
    return 0;
}
