#include <stdio.h>
#include <string.h>
int main(void){
    char *str = "suzhou university of science and technology";
    int len = strlen(str);
    for(int i=0;i<len;i++){
        printf("%c",str[i]);
    }
    printf("\n");
    //puts(str);
    return 0;
}
