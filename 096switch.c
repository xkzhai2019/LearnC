#include <stdio.h>

int main(void){
    int a;
    scanf("%d",&a);
    switch(a){
        case 1: 
            printf("周一\n");
        case 2:
            printf("周二\n");
        case 3:
            printf("周三\n");
        case 4:
            printf("周四\n");
        case 5:
            printf("周五\n");
        case 6:
            printf("周六\n");
        case 7:
            printf("周日\n");
        default:
            printf("error");
    }
    return 0;
}
