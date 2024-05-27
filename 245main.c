#include <stdio.h>
#include <stdlib.h>

int isPrime(int n){
    if(n <= 1){  //参数错误
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]){
    if(argc <= 1){
        printf("没有输入数据\n");
        return 0;
    }
    for(int i=1; i<argc; i++){
        int n = atoi(argv[i]);
        if(isPrime(n) == 0){
            printf("%d 不是素数\n", n);
        }else{
            printf("%d 是素数\n", n);
        }
    }
    return 0;
}
