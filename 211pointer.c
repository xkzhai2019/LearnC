#include <stdio.h>

int main(void){
    int a = 10, b = 20, c = 30;
    int *p = &a;// 初始化int型指针变量
    *p = b; // 通过指针变量修改内存上的数据
    c = *p; // 通过指针变量获取内存上的数据
    printf("%d,%d,%d,%d\n",a,b,c,*p);
    return 0;
}
