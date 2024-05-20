#include <stdio.h>
int main(void){
    int a = 10, *pa = &a, *paa = &a;
    double b = 20.0, *pb = &b;
    char c = 'A', *pc = &c;
    // 运算前
    printf("&a=%#X, &b=%#X, &c=%#X\n",&a,&b,&c);
    printf("pa=%#X, pb=%#X, pc=%#X\n",pa,pb,pc);
    printf("*pa=%d, *pb=%f, *pc=%c\n",*pa,*pb,*pc);
    // 加法
    pa++;pb++;pc++;
    printf("pa=%#X, pb=%#X, pc=%#X\n",pa,pb,pc);
    printf("*pa=%d, *pb=%f, *pc=%c\n",*pa,*pb,*pc);
    // 减法
    pa -= 2; pb -=2; pc -=2;
    printf("pa=%#X, pb=%#X, pc=%#X\n",pa,pb,pc);
    printf("*pa=%d, *pb=%f, *pc=%c\n",*pa,*pb,*pc);
    // 比较
    if(pa==paa) printf("%d\n",*paa);
    else printf("%d\n",*pa);
    return 0;
}
