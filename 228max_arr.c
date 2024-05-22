#include <stdio.h>

int max(int *intArr,int n){
    int maxValue = intArr[0];
    for(int i=1;i<n;i++){
        if(intArr[i]>maxValue){
            maxValue = intArr[i];
        }
    }
    return maxValue;
}

int main(void){
    int scores[5];
    int n = sizeof(scores)/sizeof(int);
    for(int i=0;i<n;i++){
        scanf("%d",scores+i);
    }
    printf("最大值为：%d\n",max(scores,n));
    return 0;
}
