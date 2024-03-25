#include <stdio.h>

int main(void){
    int month;
    printf("请输入月份：");
    scanf("%d",&month);
    if(month>12 || month<0){
        printf("%d为无效月份\n");
    }else if(month<=3){
        printf("%d为春季\n");
    }else if(month<=6){
        printf("%d为夏季\n");
    }else if(month<=9){
        printf("%d为秋季\n");
    }else{
        printf("%d为冬季\n");
    }

    return 0;
}
