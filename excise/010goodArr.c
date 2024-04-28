#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[10000] = {0}; // 存储当前项
    int tmp[10000] = {0}; // 下一项，存储对当前项的描述
    arr[1] = 1;
    int count = 1;// 记录相同元素的个数
    int size = 1; // 当前项的长度
    int k = 1; // 下一项的起点下标
    for(int i=1;i<n;i++){ // 对第i项进行统计，生成下一项
        k = 1;
        for(int j=1;j<=size;j++){
            if(arr[j]==arr[j+1]){
                count++;
            }else{
                tmp[k] = count;
                tmp[++k] = arr[j];
                k++;
                count = 1;
            }
        }
        size = k - 1;
        // 将下一项元素给到当前项
        for(int j=1;j<=size;j++){
            arr[j] = tmp[j];
        }
    }
    for(int i=1;i<=size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
