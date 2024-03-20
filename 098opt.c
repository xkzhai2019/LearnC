#include <stdio.h>

int main(void){
    int a, b;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);

    printf("%d和%d的较大值是：%d\n", a, b, a > b ? a : b);

    return 0;
}
