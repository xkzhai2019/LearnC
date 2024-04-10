#include <stdio.h>

int main(void){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr_del[9]; // 删除元素后的数组
    int arr_Insert[11]; // 插入元素后的数组

    // 删除arr第6个元素
    for(int i=0;i<9;i++){
        if(i<5) arr_del[i] = arr[i];
        else arr_del[i] = arr[i+1];
        printf("%d ", arr_del[i]);
    }
    printf("\n");
    // 在arr第6个元素后面插入一个整数20
    for(int i=0;i<11;i++){
        if(i<6) arr_Insert[i] = arr[i];
        else if(i==6) arr_Insert[i] = 20;
        else arr_Insert[i] = arr[i-1];
        printf("%d ", arr_Insert[i]);
    }

    return 0;
}
