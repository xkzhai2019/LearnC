#include <stdio.h>

int main(void){
    int year;
    printf("请输入年份：");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || year%400==0){
        printf("%d是闰年\n",year); 
    }else{
        printf("%d是平年\n",year); 
    }

    return 0;
}
