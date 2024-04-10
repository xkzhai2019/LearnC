#include <stdio.h>
#include <string.h>

int main(void){
    char str[10] = "abcdefgabc";
    printf("%p\n",str);
    printf("%p\n",&str[0]);
    printf("%p\n",&str[3]);
    printf("%p\n",strchr(str,'c'));
    printf("%p\n",strchr(str,'F'));
    printf("%d\n",strchr(str,'c')-&str[0]);

    return 0;
}
