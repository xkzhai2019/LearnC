#include <stdio.h>

int main(void){
    int score,avg;
    printf("请输入劳动积分和各科平均成绩：");
    scanf("%d %d",&score,&avg);
    if(score>=8 && avg>=65){
        printf("满足条件，可以申请\n");
    }else{
        printf("劳动积分不足8分或平均成绩未满65分，不可以申请！\n");
    }

    return 0;
}
