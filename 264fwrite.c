//从键盘输入一个数组，将数组写入文件再读取出来
#include <stdio.h>
#define N 5

int main(void){
    int a[N],b[N];
    FILE *fp;

    if((fp=fopen("array.txt","a+"))==NULL){
        printf("文件打开失败\n");
        return -1;
    }
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    fwrite(a,sizeof(int),N,fp);
    rewind(fp);
    fread(b,sizeof(int),N,fp);
    for(int i=0;i<N;i++){
        printf("%d ",b[i]);
    }
    fclose(fp);
    return 0;
}
