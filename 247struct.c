#include <stdio.h>
int main(void){
    struct stu{
        char *name;  //姓名
        long long id;  //学号
        int age;  //年龄
    }stu1={"Tom",10001,17};

    stu1.age = 20;
    printf("%s的学号为%d,年龄是%d\n",stu1.name,stu1.id,stu1.age);

    return 0;
}
