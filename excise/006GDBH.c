#include <stdio.h>
int isPrime(int n){
    if(n==1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(void){

    for(int i=6;i<=100;i+=2){
        for(int j=2;2*j<=i;j++){
            if(isPrime(j) && isPrime(i-j)){
                printf("%d=%d+%d",i,j,i-j);
                break;
            }
        }
        if(i<100){
        printf("\n"); 
        }
    }
    return 0;
}
