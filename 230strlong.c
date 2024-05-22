#include <stdio.h>
#include <string.h>
char *strlong(char *str1,char *str2){
    if(strlen(str1)>strlen(str2)){
        return str1;
    }
    return str2;
}

int main(void){
    char str1[20],str2[20];
    gets(str1);
    gets(str2);
    char *str = strlong(str1,str2);
    printf("较长的字符串为:%s\n",str);
    return 0;
}
