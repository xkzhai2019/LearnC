#include <stdio.h>
// 判断是否为素数
int isPrime(int n){
    int flag = 1;// 假设是素数
    if(n<0) return -1;
    else if(n==1) return 0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag = 0; //假设不成立
            break;
        }
    }
    return flag;
}
int main(void){
    int num, flag;
    scanf("%d",&num);
    if(isPrime(num)<0) printf("非法数据\n");
    else if(isPrime(num)==0) printf("%d不是素数\n",num);
    else printf("%d是素数\n",num);
    return 0;
}
