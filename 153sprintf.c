#include <stdio.h>

int main(void){
    char str[10];
    int a = 10;
    float f = 3.14;
    char c = 'A';
    sprintf(str,"%d",a);
    puts(str);
    sprintf(str,"%.3f",f);
    puts(str);
    sprintf(str,"%d%.3f%c",a,f,c);
    puts(str);
    return 0;
}
