#include <stdio.h>

struct stu{
    char *name;
    int age;
    long long id;
    float score;
}class[]={
    {"Tom",16,1001,91}, 
    {"John",16,1002,89.5},
    {"Alice",17,1004,99}
};

int main(void){
    class[1].score = 90;
    return 0;
}
