#include <stdio.h>
int main(void){
    struct stu{
        char *name;  //姓名
        long long id;  //学号
        int age;  //年龄
    }stu1={"Tom",10001,17},*pstr=&stu1;

    (*pstr).age = 20;
    printf("%s的学号为%lld,年龄是%d\n",pstr->name,(*pstr).id,pstr->age);

    return 0;
}
