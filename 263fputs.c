//向data.txt追加一行字符
#include <stdio.h>

int main(void){
    FILE *fp;
    char str[100];

    if((fp=fopen("data.txt","a"))==NULL){
        printf("文件打开失败\n");
        return -1;
    }
    printf("输入要追加的字符串：");
    gets(str);
    fputs(str,fp);
    fclose(fp);
    return 0;
}
