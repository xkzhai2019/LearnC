#include <stdio.h>

int main(void){
    int a;
    scanf("%d",&a);
    if(a==1){
        printf("周一\n");
    }else if(a==2){
        printf("周二\n");
    }else if(a==3){
        printf("周三\n");
    }else if(a==4){
        printf("周四\n");
    }else if(a==5){
        printf("周五\n");
    }else if(a==6){
        printf("周六\n");
    }else if(a==7){
        printf("周日\n");
    }else{
        printf("error\n");
    }
    return 0;
}
