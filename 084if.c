#include <stdio.h>

int main(void){
    int a, b, max;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    max = b;
    if(a>b) max=a;
    //if(a<b) max=b;
    printf("%d和%d的较大值是：%d\n", a, b, max);

    return 0;
}
