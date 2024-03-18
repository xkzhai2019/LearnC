#include <stdio.h>

int main(void){
    int a,b,c;
    printf("请输入三个整数：");
    scanf("%d %d %d",&a,&b,&c);
    int max = b;
    if(a>b){
        max = a;
        if(c>max){
            max = c;
        }
    }else{
        if(c>max){
            max = c;
        }
    }
    printf("最大的数为：%d\n",max);

    return 0;
}
