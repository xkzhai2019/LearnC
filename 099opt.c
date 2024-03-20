#include <stdio.h>

int main(void){
    int a, b, c;
    printf("请输入三个整数：");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d,%d和%d中的最大值是：%d\n", a, b, c, (a > b ? a : b) > c ? (a > b ? a : b) : c);
    printf("%d,%d和%d中的最小值是：%d\n", a, b, c, (a < b ? a : b) < c ? (a < b ? a : b) : c);

    return 0;
}
