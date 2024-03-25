#include <stdio.h>

int main(void){
    int sum = 0;

    for(int i=1;;i++){
        sum += i;
        if(i>=100) break;
    }
    printf("1+2+...+100=%d\n",sum);

    return 0;
}
