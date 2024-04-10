#include <stdio.h>

int main(void){
    int a[10];
    int i;

    // 从控制台读取用户输入
    for(i=0;i<10;i++){
        scanf("%d",a[i]);
    }

    // 依次输出数组元素
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
