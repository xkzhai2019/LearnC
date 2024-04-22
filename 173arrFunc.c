#include <stdio.h>
// 从键盘输入n个人的数学成绩
void readScores(float scores[], int n){
    printf("请输入%d个人的数学成绩，以空格隔开：",n);
    for(int i=0;i<n;i++){
        scanf("%f",&scores[i]);
    }
}
//计算n个人的平均成绩
float calAvg(float scores[],int n){
    float sum = 0.0;
    for(int i=0;i<n;i++){
        sum += scores[i];
    }
    return n > 0 ? sum/n: -1;
}
int main(void){
    int n;
    printf("请输入人数：");
    scanf("%d",&n);
    float scores[n];
    readScores(scores,n);
    printf("平均成绩为:%f\n",calAvg(scores,n));
    return 0;
}
