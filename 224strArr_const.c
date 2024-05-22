#include <stdio.h>
#include <string.h>
int main(void){
    char str1[] = "suzhou university of science and technology";
    puts(str1);
    char *pstr = str1;
    pstr[0] = 'S';
    puts(str1);
    char *str2 = "suzhou university of science and technology";
    puts(str2);
    *str2 = 'S';
    puts(str2);
    return 0;
}
