#include <stdio.h>

int main(void){
    int a = 10, b = 20;
    int *p_a = &a;
    int *p_b = &b;
    b = *p_a + 5; //表示将变量a存储的值 + 5 赋给b，相当于(*p_a)+5
    printf("a:%d, b:%d\n",a,b); // 10, 15
    b = ++*p_a; // 将变量a存储的值+1，然后赋给b，相当于++(*p_a)
    printf("a:%d, b:%d\n",a,b); // 11, 11
    printf("p_a: %#X, p_b: %#X\n",p_a,p_b); 
    //b = *p_a++; // b = (*p_a)++; ---> b = *(p_a++)
    b = (*p_a)++;
    //b = *(p_a++); // line 12 <==> line 14
    printf("a:%d, b:%d\n",a,b); // 12, 11
    b = 30;
    printf("*p_a:%d, b:%d\n",*p_a,b); // 12, 30
    printf("p_a: %#X, p_b: %#X\n",p_a,p_b); 
    return 0;
}
