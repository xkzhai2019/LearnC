#include <stdio.h>
// 大小写转换
int main(void){
    char c1,c2,c3;
    scanf("%c %c %c",&c1,&c2,&c3);

    // a-z  A-Z
    c1 = c1 - 'a' + 'A';
    c2 = c2 - 'a' + 'A';
    c3 = c3 - 'a' + 'A';
    printf("%c %c %c\n",c1,c2,c3);

    return 0;
}
