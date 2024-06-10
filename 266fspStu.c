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
        scanf("%s %d %f",bodya[i].name,&bodya[i].id,&bodya[i].score);
        fprintf(fp,"%s %d %f\n",bodya[i].name,bodya[i].id,bodya[i].score);
    }
    rewind(fp);
    for(int i=0;i<N;i++){
        fscanf(fp,"%s %d %f",bodyb[i].name,&bodyb[i].id,&bodyb[i].score); 
        printf("%s %d %f\n",bodyb[i].name,bodyb[i].id,bodyb[i].score);
    }
    fclose(fp);
    return 0;
}
