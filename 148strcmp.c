#include <stdio.h>
#include <string.h>
int main(void){
    char str1[] = "aBcDeF";
    char str2[] = "AbCdEf";
    char str3[] = "aacdef";
    char str4[] = "aBcDeF";
    char str5[10] = "aBcDeF";
    
    printf("str1[] VS str5[10]: %d\n",strcmp(str1,str5));
    printf("str1 VS str2: %d\n", strcmp(str1, str2));
    printf("str1 VS str3: %d\n", strcmp(str1, str3));
    printf("str1 VS str4: %d\n", strcmp(str1, str4));
   
    return 0;
}
