#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "abc123";
    int len = strlen(str);
    printf("len of str is %d\n",len);
    printf("size of str is %d\n",sizeof(str)/sizeof(str[0]));
    return 0;
}
