#include <stdio.h>

int main(void){
    struct{
        char *name;  //姓名
        long long id;  //学号
        int age;  //年龄
    }stu1={"Tom",10001,17},stu2={"John",10002,19},stu3;
    
    //stu3 = {"Alice",10003,18};
    stu3.name = "Alice";
    stu3.id = 10003;
    stu3.age = 18;
    printf("%s的学号为%lld,年龄是%d\n",stu1.name,stu1.id,stu1.age);
    printf("%s的学号为%lld,年龄是%d\n",stu2.name,stu2.id,stu2.age);
    printf("%s的学号为%lld,年龄是%d\n",stu3.name,stu3.id,stu3.age);

    return 0;
}
