#include <stdio.h>

int main(void){
    char str[] = "suzhou university of science and technology";
    printf("%s\n",str);
    puts(str);
    int len = sizeof(str) / sizeof(char);
    //int len = strlen(str);
    for(int i=0;i<len;i++){
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
