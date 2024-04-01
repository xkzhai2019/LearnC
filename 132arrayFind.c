#include <stdio.h>

int main(void){
    int a[10] = {0, 6, 10, 23, 34, 100, 177, 296, 300, 999};
    int i,num;
    int index = -1;
   
    printf("请输入要查询的整数：");
    scanf("%d", &num);
    for(i=0; i<10; i++){
        if(a[i] == num){
            index = i;
            break;
        }else if(a[i]>num){
            break;
        }
    }
    if(index < 0){
        printf("%d 不在数组中.\n", num);
    }else{
        printf("%d 在数组中, 下标为 %d.\n", num, index);
    }

    return 0;
}
