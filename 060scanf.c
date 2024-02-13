#include <stdio.h>

int main(void){
    int a,b,c;

    scanf("%d %d", &a,&b);
    printf("a+b=%d\n",a+b);

    scanf("%d    %d", &a,&b);
    printf("a+b=%d\n",a+b);

    scanf("%d,%d,%d", &a,&b,&c);
    printf("a+b+c=%d\n",a+b+c);

    scanf("input a and b: %d %d",&a,&b);
    printf("a-b=%d\n",a-b);
    
    return 0;
}
