#include <stdio.h>

int main(void){
    int min=1000000, max=-1000000;
    int x;
    int sum = 0;
    int num = 0;
    while(scanf("%d",&x)==1){
        sum += x;
        if(x>max) max = x;
        if(x<min) min = x;
        num++;
    }
    printf("max: %d, min: %d, avg: %.3f\n",max,min,(double)sum/num);
    return 0;
}
