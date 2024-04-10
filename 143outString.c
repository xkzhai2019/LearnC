#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "Hello,C!";
    puts(str);
    printf("%s\n",str);
    int len  = strlen(str);
    for(int i=0;i<len;i++){
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
