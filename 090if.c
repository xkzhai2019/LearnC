#include <stdio.h>

int main(void){
    int score,avg;
    printf("请输入劳动积分和各科平均成绩：");
    scanf("%d %d",&score,&avg);
    if(score>=8){
        if(avg>=65){
            printf("满足条件，可以申请\n");
        }else{
            printf("平均成绩不足65，不可以申请\n");
        }
    }else{
        printf("劳动积分不足8分，不可以申请！\n");
    }

    return 0;
}
