#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "suzhou university of science and technology";
    char *pstr = str;
    int len = strlen(str);
    for(int i=0;i<len;i++){
        //printf("%c",*(pstr+i));
        printf("%c",*(str+i));
    }
    printf("\n");
    for(int i=0;i<len;i++){
        printf("%c",pstr[i]);
    }
    printf("\n");
    return 0;
}
