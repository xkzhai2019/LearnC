#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int min = a*b; // 最小公倍数
    int max = 1;// 最大公约数


    for(int i=2;i<=(a>b?b:a);i++){
        if(a%i==0 && b%i==0){
            max = i;
        }
    }
    for(int j=a*b;j>=(a>b?a:b);j--){
        if(j%a==0 && j%b==0){
            min = j;
        }
    }
    printf("%d与%d的最大公约数为%d\n",a,b,max);
    printf("%d与%d的最小公倍数为%d\n",a,b,min);

    return 0;
}
