#include <stdio.h>
// 冒泡排序：从小到大
// 算法优化
int main(void){
    int a[] = {8,6,3,2,1,7,5,4};
    int length = sizeof(a) / sizeof(a[0]);
    int tmp;
    printf("排序前：");
    for(int i=0;i<length;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    int flag; // 标志，1代表所有元素都已排好序，0则反之
    for(int i=1;i<=length-1;i++){// 总共进行length-1轮排序
        flag = 1; // 第i轮排序时，假设所有元素都已排好序
        for(int j=1;j<=length-i;j++){// 第i轮排序需比较length- i次
            // 每次用a[j-1] 与 a[j]比较
            if(a[j]<a[j-1]){
                tmp = a[j-1];
                a[j-1] = a[j];
                a[j] = tmp;
                flag = 0; // 第i轮排序发生了交换，说明未排好序
            }
        }
        if(flag) break;
    }
    printf("排序后：");
    for(int i=0;i<length;i++)  printf("%d ",a[i]);
    return 0;
}
