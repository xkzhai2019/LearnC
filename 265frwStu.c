//从键盘输入两个学生数据，写入文件中再读取出来
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
    }
    fwrite(bodya,sizeof(struct Stu),N,fp);
    rewind(fp);
    fread(bodyb,sizeof(struct Stu),N,fp);
    for(int i=0;i<N;i++){
        printf("%s %d %f\n",bodyb[i].name,bodyb[i].id,bodyb[i].score);
    }
    fclose(fp);
    return 0;
}
