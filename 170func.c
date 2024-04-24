#include <stdio.h>
// 定义三个全局变量，表示三个面的面积
int s1,s2,s3;
// 计算体积
int vs(int length, int width, int height){
    int v;
    v = length * width * height;
    s1 = length * width;
    s2 = length * height;
    s3 = width * height;
    return v;
}
int main(void){
    int v;
    v = vs(10,20,30);
    printf("长方体体积为:%d\n",v);
    printf("三个面积为为:%d, %d, %d\n",s1,s2,s3);
    v = vs(20,30,40);
    printf("长方体体积为:%d\n",v);
    printf("三个面积为为:%d, %d, %d\n",s1,s2,s3);

    return 0;
}
