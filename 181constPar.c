#include <stdio.h>

// 演示const修饰函数参数
void maxmin(int a,int b,const int arr[]){
    /*
    arr[0] = a > b ? a:b;
    arr[1] = a + b - arr[0];
    */
    for(int i=0;i<2;i++) printf("%d ",arr[i]);
}

int main(void){
    int a = 10, b = 20;
    int arr[2] = {0};
    maxmin(a,b,arr);
    printf("max:%d,min:%d\n",arr[0],arr[1]);
    return 0;
}
