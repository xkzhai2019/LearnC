#include <stdio.h>

int main(void){
    // 定义普通变量
    int a = 10, b = 20;
    char c = 'A', d = '&';
    // 定义指针变量
    int *p1 = &a;
    char *p2 = &c;
    printf("%#X %#X\n",p1,&a);
    printf("%#X %#X\n",p2,&c);
    // 修改指针变量的值
    p1 = &b;
    p2 = &d;
    printf("%#X %#X\n",p1,&b);
    printf("%#X %#X\n",p2,&d);
    return 0;
}
