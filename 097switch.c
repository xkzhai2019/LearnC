#include <stdio.h>

int main(void){
    int score;
    char grade;
    printf("请输入分数：");
    scanf("%d",&score);

    switch(score/10){
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'E';
            break;
    }
    printf("五级制成绩为：%c\n",grade);
    return 0;
}
