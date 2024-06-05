#include <stdio.h>

struct stu{
    char *name;
    long long id;
    float score;
}class[3]={{"Tom",1001,91.5},{"Alice",1002,78},{"John",1003,89}};

int main(void){
    int count = 0;
    float sum = 0;
    for(int i=0;i<3;i++){
        if(class[i].score<90) count++;
        sum += class[i].score;
    }
    printf("全班总分：%f,平均分：%f,90分以下人数：%d\n",sum,sum/3,count);

    return 0;
}
