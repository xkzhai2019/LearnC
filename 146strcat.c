#include <stdio.h>
#include <string.h>

int main(void){
    char str1[100] = "suzhou university ";
    char str2[100] = "of science and technology";
    printf("len of str1: %d\n",strlen(str1));
    printf("len of str2: %d\n",strlen(str2));
    puts(strcat(str1,str2));
    puts(str1);
    printf("len of str1: %d\n",strlen(str1));
    
    return 0;
}
