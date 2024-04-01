#include <stdio.h>

int main(void){
    int a[10] = {0, 6, 10, 23, 34, 100, 177, 296, 300, 999};
    int num;
    int index = -1;
   
    printf("请输入要查询的整数：");
    scanf("%d", &num);
    int max = 9;
    int min = 0;
    int mid;
    while(min<max){
        mid = (max + min) / 2;
        if(a[mid]==num){
            index = mid;
            break;
        }
        // 要查询的数大于中间的数
        if(a[mid]<num) min = mid + 1;
        else max = mid - 1;
    }
    if(index < 0){
        printf("%d 不在数组中.\n", num);
    }else{
        printf("%d 在数组中, 下标为 %d.\n", num, index);
    }

    return 0;
}
