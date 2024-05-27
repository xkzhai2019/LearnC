#include <stdio.h>

int main(void){
    char *str0 = "xkzhai";
    char *str1 = "email";
    char *str2 = "com";

    char *str[3] = {str0,str1,str2};
    printf("%s\n%s\n%s\n",str[0],str[1],str[2]);
    return 0;
}
