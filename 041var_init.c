#include <stdio.h>
// 全局变量
int g_a;
float g_f;
char g_c;

int main(void){
    // 局部变量
    int a;
    float f;
    char c;
    printf("g_a: %d, g_f: %f, g_c: %d\n",g_a,g_f,g_c);
    printf("a: %d, f: %f, c: %d\n",a,f,c);
    return 0;
}
