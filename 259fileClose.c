//一行一行读取文本文件的内容并显示到屏幕上
#include <stdio.h>
#define N 100

int main(void){
    FILE *fp;
    char str[N+1];
    
    if((fp=fopen("data.txt","r"))==NULL){
        printf("文件打开失败\n");
        return -1;
    }
    while(fgets(str,N,fp)!=NULL){
        printf("%s",str);
    }

    fclose(fp);
    printf("%d",fclose(fp));
    return 0;
}
