#include <stdio.h>
// 计算每门课程的总分和平均分
void AvgforCourse(float scores[][3],float sum[],float avg[],int n){
    for(int i=0;i<3;i++){
        sum[i] = 0.0;
        for(int j=0;j<n;j++){
            sum[i] += scores[j][i];
        }
        avg[i] = sum[i] / n;
    }
}
// 计算每个学生的总分和平均分
void AvgforStd(float scores[][3],float sum[],float avg[],int n){
    for(int i=0;i<n;i++){
        sum[i] = 0.0;
        for(int j=0;j<3;j++){
            sum[i] += scores[i][j];
        }
        avg[i] = sum[i] / 3;
    }
}

// 打印每个学生的成绩，总分和平均成绩/每门课的总分和平均成绩
void Print(float scores[][3],float sumC[],float avgC[],float sumS[], float avgS[],int n){
    printf("学生成绩为：\n");
    printf("语文\t数学\t英语\t总分\t平均分\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            printf("%.3f\t", scores[i][j]);
        }
        printf("%.3f\t%.3f",sumS[i],avgS[i]);
        printf("\n");
    }
    printf("每门课的总分和平均分：\n");
    for(int i=0;i<3;i++){
        printf("%.3f\t", sumC[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("%.3f\t", avgC[i]);
    }

}
int main(void){
    float scores[5][3] = {{90,130,80},{87,102,85},{99,145,91},
        {75,80,70},{90,90,70}};
    int num_of_course = sizeof(scores[0]) / sizeof(float);
    int num_of_std = sizeof(scores) / sizeof(scores[0]);
    
    float sum_for_course[num_of_course];
    float avg_for_course[num_of_course];
    float sum_for_std[num_of_std];
    float avg_for_std[num_of_std];
    
    AvgforCourse(scores,sum_for_course,avg_for_course,num_of_std);
    AvgforStd(scores,sum_for_std,avg_for_std,num_of_std);
    Print(scores,sum_for_course,avg_for_course,sum_for_std,avg_for_std,num_of_std);
    return 0;

}
