#include <stdio.h>
int main(void){
    enum week{Mon=1,Tues,Wed,Thurs,Fri,Sat,Sun} day;
    scanf("%d",&day);
    switch(day){
        case Mon: puts("周一"); break;
        case Tues: puts("周二"); break;
        case Wed: puts("周三"); break;
        case Thurs: puts("周四"); break;
        case Fri: puts("周五"); break;
        case Sat:
        case Sun: puts("周末"); break;
        default: puts("Error!");
    }
    return 0;
}
