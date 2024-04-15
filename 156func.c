#include <stdio.h>
// 冒泡排序：从小到大

void printArray(int a[],int length);

int main(void){
    int a[] = {8,6,3,2,1,7,5,4};
    int length = sizeof(a) / sizeof(a[0]);
    int tmp;
    // 打印排序前的数组
    printf("排序前：");
    printArray(a,length);
    printf("\n");
    for(int i=1;i<=length-1;i++){// 总共进行length-1轮排序
        for(int j=1;j<=length-i;j++){// 第i轮排序需比较length- i次
            // 每次用a[j-1] 与 a[j]比较
            if(a[j]<a[j-1]){
                tmp = a[j-1];
                a[j-1] = a[j];
                a[j] = tmp;
            }
        }
    }
    // 打印排序后的数组
    printf("排序后：");
    printArray(a,length);
    return 0;
}
void printArray(int a[],int length){
    for(int i=0;i<length;i++){
        printf("%d ",a[i]);
    }
}
