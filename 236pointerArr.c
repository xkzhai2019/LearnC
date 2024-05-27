#include <stdio.h>

int main(void){
    char *str[3] = {"xkzhai","email","com"};
    printf("%s\n%s\n%s\n",str[0],str[1],str[2]);
    str[1] = "usts";
    printf("%s\n%s\n%s\n",str[0],str[1],str[2]);
    return 0;
}
