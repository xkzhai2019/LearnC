//从键盘输入一行字符，写入到data.txt中
#include <stdio.h>

int main(void){
    FILE *fp;
    char c;
    
    if((fp=fopen("data.txt","a+"))==NULL){
        printf("文件打开失败\n");
        return -1;
    }
    printf("请输入一行字符：");
    while((c=getchar())!='\n'){
        fputc(c,fp);
    }
    fclose(fp);
    return 0;
}
