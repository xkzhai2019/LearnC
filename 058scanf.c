#include <stdio.h>

int main(void){
    int i1 = 0, i2 = 0, i3 = 0, i4 = 0;
    // 用户从键盘输入1个整数，scanf格式化扫描输入，并赋值给变量i1
    scanf("%d",&i1); 
    // 用户从键盘输入1个整数，scanf格式化扫描输入，并赋值给变量i2
    scanf("%d",&i2);
    printf("i1+i2=%d\n",i1+i2);
    // 用户从键盘输入2个整数，以空格分隔，scanf格式化扫描输入，并分别赋值给变量i3和i4
    scanf("%d %d",&i3,&i4);
    printf("i3+i4=%d\n",i3+i4);

    return 0;
}
