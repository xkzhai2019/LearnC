#include <stdio.h>

int main(void){
    int i1 = 1, i2 = 2;
    char c;
    scanf("i1=%d",&i1);
    while((c=getchar()) != '\n' && c != EOF){
        // 空循环体    
    };
    scanf("i2=%d",&i2);
    printf("i1=%d,i2=%d\n",i1,i2);

    return 0;
}
