#include <stdio.h>

int main(void){
    int a = 1, b = 0, c = 0;
    printf("a:%d,b:%d,c:%d\n",a,b,c);
    printf("(b++) && (a--) = %d\n", (b++) && (a--));
    printf("a:%d,b:%d,c:%d\n",a,b,c);

    printf("(a--) || (++b) = %d\n",(a--)||(++b));
    printf("a:%d,b:%d,c:%d\n",a,b,c);

    return 0;
}
