#include <stdio.h>

int main(void){
    int month;
    printf("请输入月份：");
    scanf("%d",&month);
    int c = (month - 1)/3;
    switch(c){
        case 0:
            printf("%d是春季\n",month);
            break;
        case 1:
            printf("%d是夏季\n",month);
            break;
        case 2:
            printf("%d是秋季\n",month);
            break;
        case 3:
            printf("%d是冬季\n",month);
            break;
        default:
            printf("月份无效\n");
    }

    return 0;
}
