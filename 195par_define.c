#include <stdio.h>
#define SQ(y) (y)*(y)
#define SSQ(y) y*y

int main(void){
    int a = 10;
    int sq = SQ(a+1);
    int ssq = SSQ(a+1);
    printf("sq=%d\n",sq);
    printf("ssq=%d\n",ssq);
    return 0;
}
