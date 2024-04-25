#include <stdio.h>
int isPrime(int n){ 
    int flag = 1;
    if(n==1){
        flag = 0;
        return flag;
    }   
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = 0;
        }   
    }   
    return flag;
}
int main(void){
    int n;
    scanf("%d",&n);
    int ncount = 0;
    for(int i=1;i+2<n;i++){
        if(isPrime(i) && isPrime(i+2)){
            printf("%d %d",i,i+2);
            printf("\n");
            ncount++;
        }   
    }   
    if(ncount==0){
        printf("empty");
    }
    return 0;
}
