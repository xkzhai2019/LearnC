//一行一行读取data.txt的内容并显示到屏幕上
#include <stdio.h>
#define N 101

int main(void){
    FILE *fp;
    char str[N],c;
    
    if((fp=fopen("data.txt","r"))==NULL){
        printf("文件打开失败\n");
        return -1;
    }
    while((c=fgetc(fp))!=EOF){
        putchar(c);
    }
    while((fgets(str,N,fp))!=NULL){
        printf("fgets:");
        printf("%s",str);
    }
    fclose(fp);
    return 0;
}
