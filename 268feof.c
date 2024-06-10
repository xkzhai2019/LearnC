//逐字符读取data.txt的内容并显示到屏幕上
#include <stdio.h>
#define N 100

int main(void){
    FILE *fp;
    char c;
    
    if((fp=fopen("data.txt","r"))==NULL){
        printf("文件打开失败\n");
        return -1;
    }
    //while((c=fgetc(fp))!=EOF){
    while(!feof(fp)){
        c=fgetc(fp);
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}
