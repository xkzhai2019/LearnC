#include <stdio.h>

int main(void){
    int year,month;
    printf("请输入年份和月份，以空格隔开：");
    scanf("%d %d",&year,&month);
    if(year<=0 || month>12 || month<1){
        printf("年份或月份不合法\n");
    }else{
        int feb_day = 28;
        if((year%4==0 && year%100!=0) || year%400==0){
            feb_day = 29;
        }
        switch(month){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("%d年%d月有%d天\n",year,month,31);
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("%d年%d月有%d天\n",year,month,30);
                break;
            case 2:
                printf("%d年2月有%d天\n",year,feb_day);
                break;
       }
    }

    return 0;
}
