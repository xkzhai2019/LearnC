#include <stdio.h>

int main(void){
    int score;
    printf("请输入你的劳动积分：");
    scanf("%d",&score);
    if(score>=8){
        printf("恭喜！你劳动积分已满8分，可以申请!\n");
    }
    else{
        printf("抱歉！你劳动积分不满8分，不可以申请!\n");
    }

    return 0;
}
