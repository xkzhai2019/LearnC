#include <stdio.h>

int main(void){
    int a;
    scanf("%d",&a);
    switch(a){
        case 1: 
            printf("周一\n");
            break;
        case 2:
            printf("周二\n");
            break;
        case 3:
            printf("周三\n");
            break;
        case 4:
            printf("周四\n");
            break;
        case 5:
            printf("周五\n");
            break;
        case 6:
            printf("周六\n");
            break;
        case 7:
            printf("周日\n");
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}
