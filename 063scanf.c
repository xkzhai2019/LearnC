#include <stdio.h>

int main(void){
    char letter;
    int num;
    float score;
    char email[20];
    
    scanf("%c",&letter);
    scanf("%d",&num);
    scanf("%f",&score);
    scanf("%s",email);
    
    printf("用户输入了英文字母：%c\n",letter);
    printf("班里共有%d名学生，期末平均成绩为%f\n",num,score);
    printf("任课教师邮箱为:%s\n",email);

    return 0;
}
