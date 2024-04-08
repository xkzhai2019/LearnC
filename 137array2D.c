#include <stdio.h>

int main(void){
    int scores[5][3];
    int sum[3] = {0};
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&scores[i][j]); // 输入每个同学的各科成绩
            sum[j] += scores[i][j];
        }
    }
    printf("语文平均分：%.3f，数学平均分：%.3f，英语平均分：%.3f\n",sum[0] / 5.0,sum[1]/5.0,sum[2]/5.0);
    return 0;
}
