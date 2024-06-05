#include <stdio.h>

struct stu{
    char *name;
    long long id;
    float score;
}class[3]={{"Tom",1001,91.5},{"Alice",1002,78},{"John",1003,89}},*ps;

int main(void){
    int len = sizeof(class) / sizeof(struct stu);
    
    printf("姓名\t学号\t分数：\n");
    for(ps=class; ps<class+len; ps++){
        printf("%s\t%lld\t%.2f\n",ps->name,ps->id,ps->score);
    }

    return 0;
}
