#include <stdio.h>
int main(void){
    struct stu{
        char *name;  //姓名
        long long id;  //学号
        int age;  //年龄
        char class;  //班级
        float score;  //成绩
    }stu1,stu2,stu3;

    printf("sizeof char*:%d\n",sizeof(char*));
    printf("sizeof long long:%d\n",sizeof(long long));
    printf("sizeof int:%d\n",sizeof(int));
    printf("sizeof char:%d\n",sizeof(char));
    printf("sizeof float:%d\n",sizeof(float));
    printf("sizeof stu:%d\n",sizeof(stu1));

    return 0;
}
