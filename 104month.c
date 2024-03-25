#include <stdio.h>

int main(void){
    int month;
    printf("请输入月份：");
    scanf("%d",&month);
    switch(month){
        case 1:
        case 2:
        case 3:
            printf("%d是春季\n",month);
            break;
        case 4:
        case 5:
        case 6:
            printf("%d是夏季\n",month);
            break;
        case 7:
        case 8:
        case 9:
            printf("%d是秋季\n",month);
            break;
        case 10:
        case 11:
        case 12:
            printf("%d是冬季\n",month);
            break;
        default:
            printf("月份无效\n");
    }

    return 0;
}
