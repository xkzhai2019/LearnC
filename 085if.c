#include <stdio.h>

int main(void){
    int score;
    printf("请输入百分制成绩：");
    scanf("%d",&score);
    char grade;
    if(score>=90){
        grade = 'A';
    }else if(score>=80){
        grade = 'B';
    }else if(score>=70){
        grade = 'C';
    }else if(score>=60){
        grade = 'D';
    }else{
        grade = 'E';
    }
    printf("五级制成绩为：%c\n",grade);
    
    return 0;
}
