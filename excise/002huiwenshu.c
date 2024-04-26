#include <stdio.h>
int isPrime(int n){
    if(n==1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int reverse(int n){
    int tmp=0;
    while(1){
        if(n==0) break;
        tmp *= 10;
        tmp += n%10;
        n = n/10;
    }
    return tmp;
}

int main(void){
    int n;
    int count = 0;
    scanf("%d",&n);

    for(int i=11;i<=n;i++){
        if(i==reverse(i) && isPrime(i))
            count++;
    }
    printf("%d",count);
    return 0;
}
