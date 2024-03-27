#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int factor_n = 1;
    for(int i=1;i<=n;i++){
        factor_n = 1;
        for(int j=1;j<=i;j++){
            factor_n *= j;
        }
        sum += factor_n;
    }
    printf("1!+2!+...+%d!=%d\n",n,sum);
    return 0;
}
