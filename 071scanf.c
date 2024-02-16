#include <stdio.h>

int main(void){
    int a = 1, b = 2;
    char name[20];
    printf("b=%d\n",b);
    scanf("%d",&a);
    //scanf("%s",name);
    scanf("%d",&b);
    //printf("a=%d\n",a);
    scanf("%s",name);
    printf("a=%d,b=%d,name=%s\n",a,b,name);
    return 0;
}
