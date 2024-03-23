#include <stdio.h>

int myfunc(int num){
    int sum = 0;
    int i = 1;
    while(i<=num){
        sum += i*i;
        i++;
    }
    return sum;
}

int main(void){
    int num = 0;
    scanf("%d",&num);
    int ret = myfunc(num);// 计算1*1+2*2+...+num*num
    printf("%d\n",ret);
    return 0;
}
