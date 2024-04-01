#include <stdio.h>
// 使用数组打印4*4矩阵
int main(void){
    int a[] = {20,234,567,12};
    int b[] = {56789,9999,2048,1};
    int c[] = {333,200,2,6666};
    int d[] = {33,0,22,12345678};
    
    printf("%-9d %-9d %-9d %-9d\n",a[0],a[1],a[2],a[3]);
    printf("%-9d %-9d %-9d %-9d\n",b[0],b[1],b[2],b[3]);
    printf("%-9d %-9d %-9d %-9d\n",c[0],c[1],c[2],c[3]);
    printf("%-9d %-9d %-9d %-9d\n",d[0],d[1],d[2],d[3]);
    
    return 0;
}
