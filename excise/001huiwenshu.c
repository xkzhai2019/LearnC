#include <stdio.h>
int isPrime(int n){
    if(n==1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(void){
    for(int i=100;i<1000;i++){
        if(i/100==i%10 && isPrime(i))
            printf("%d\n",i);
    }
    return 0;
}
