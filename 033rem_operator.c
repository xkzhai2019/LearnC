#include <stdio.h>

int main(void){
    int a = 100 % 9; // 1
    int b = 100 % -9; // 1
    int c = -100 % 9; // -1
    int d = -100 % -9; // -1

    printf("100_rem_9 = %d, 100_rem_-9 = %d\n",a,b);
    printf("-100 %% 9 = %d, -100 %% -9 = %d\n",c,d);
    return 0;
}
