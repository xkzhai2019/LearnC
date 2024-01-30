#include <stdio.h>

int main(void){
    char a = '1';
    char b = '@';
    char c = 'c';
    char d = ' '; // 空格也是一个字符

    // 使用putchar
    putchar(a);putchar(b);
    putchar(d);putchar(c);
    putchar('\n');
    // 使用printf
    printf("%c %c %c\n",a,b,c);
    return 0;
}
