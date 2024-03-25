#include <stdio.h>

int main(void){
    int sum = 0;
    int i = 1;
    while(1){
        if(i>=101)
            break; 
        sum += i;
        i++;
    }
    printf("1+2+...+100 = %d\n",sum);

    return 0;
}
