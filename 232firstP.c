#include <stdio.h>

int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int *find(int *arr,int N){
    for(int i=0;i<N;i++){
        if(isPrime(arr[i])){
            return arr+i;
        }
    }
    return NULL;
}

int main(void){
    printf("请输入数组长度：");
    int N;
    scanf("%d",&N);
    int arr[N];
    printf("请输入%d个整数：",N);
    for(int i=0;i<N;i++){
        scanf("%d",arr+i);
    }
    int *p = find(arr,N);
    if(p!=NULL){
        printf("%#X\n%d\n",p,*p); // 输出这个素数的地址和它本身
    }else{
        printf("该数组中没有素数\n");
    }
    return 0;
}
