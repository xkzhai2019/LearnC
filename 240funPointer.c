#include <stdio.h>
int max(int a, int b){
    return a>b?a:b;
}
int main(void){
    int x,y;
    int (*pmax)(int a, int b);
    pmax = max;
    scanf("%d %d",&x,&y);
    printf("%d\n",(*pmax)(x,y));
    printf("%d\n",pmax(x,y));
    return 0;
}
