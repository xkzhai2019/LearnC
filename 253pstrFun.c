#include <stdio.h>
struct stu{
    char *name;
    long long id;
    float score;
}class[3]={{"Tom",1001,91.5},{"Alice",1002,78},{"John",1003,89}};

void average(struct stu *pstr, int len){
    int count = 0;
    float sum = 0;
    for(int i=0;i<len;i++){
        if((pstr+i)->score<90) count++;
        sum += (pstr+i)->score;
    }
    printf("全班总分：%f,平均分：%f,90分以下人数：%d\n",sum,sum/len,count);
}

int main(void){
    int len = sizeof(class) / sizeof(struct stu);
    average(class,len);
    return 0;
}
