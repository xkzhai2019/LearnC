//利用格式化读写学生信息
#include <stdio.h>
#define N 2

struct Stu{
    char name[10];
    int id;
    float score;
}bodya[N],bodyb[N];

int main(void){
    FILE *fp;
    if((fp=fopen("array.txt","a+"))==NULL){
        printf("文件打开失败\n");
        return -1;
    }
    printf("请输入两名学生的信息:姓名、学号、成绩：\n");
    for(int i=0;i<N;i++){
        fscanf(stdin,"%s %d %f",bodya[i].name,&bodya[i].id,&bodya[i].score);
        fprintf(stdout,"%s %d %f\n",bodya[i].name,bodya[i].id,bodya[i].score);
    }
    fclose(fp);
    return 0;
}
