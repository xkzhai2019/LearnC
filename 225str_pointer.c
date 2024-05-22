#include <stdio.h>
int main(void){
    char str[20] = "usts2024.edu.cn";
    char *s1 = str;
    char *s2 = str+2;
    
    char c1 = str[4];
    char c2 = *str;
    char c3 = *(str+4);
    char c4 = *str + 2;
    char c5 = (str+1)[5];

    printf("s1: %s\n",s1); // usts2024.edu.cn
    printf("s2: %s\n",s2); // ts2024.edu.cn
    printf("c1: %c\n",c1); // 2
    printf("c2: %c\n",c2);// u
    printf("c3: %c\n",c3);// 2
    printf("c4: %c\n",c4);// w
    printf("c5: %c\n",c5);// 2
    
    return 0;
}
