#include <stdio.h>
struct{
    char name[20];
    int id;
    char sex;
    char profession;
    union{
        float score;
        char course[20];
    }sc;
}body[4];
int main(void){
    printf("输入人员信息：姓名、编号、性别、职业、成绩/教授科目\n");
    for(int i=0;i<4;i++){
       scanf("%s %d %c %c",body[i].name,&(body[i].id),&(body[i].sex),&(body[i].profession));
       if(body[i].profession=='s') scanf("%f",&(body[i].sc.score));
       else scanf("%s",body[i].sc.course);
       fflush(stdin);
    }
    //输出人员信息
    printf("姓名\t编号\t性别\t职业\t成绩/教授科目\n");
    for(int i=0;i<4;i++){
       printf("%s\t%d\t%c\t%c\t",body[i].name,body[i].id,body[i].sex,body[i].profession);
       if(body[i].profession=='s') printf("%f",body[i].sc.score);
       else printf("%s",body[i].sc.course);
       printf("\n");
    }

    return 0;
}
