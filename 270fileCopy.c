//利用fgets,fputs复制文本文件
#include <stdio.h>
int fileCopy(char *srcFile, char *destFile){
    FILE *fpSrc;
    FILE *fpDest;
    char ch[100];
    if((fpSrc=fopen(srcFile,"r"))==NULL){
        printf("文件打开失败\n");
        return -1;
    }
    fpDest = fopen(destFile,"w");
    while(fgets(ch,100,fpSrc)!=NULL){
        fputs(ch,fpDest);
    }
    fclose(fpSrc);
    fclose(fpDest);
    return 0; 
}

int main(void){
    char srcFile[20] = "data.txt";
    char destFile[20] = "data_copy2.txt";
    fileCopy(srcFile,destFile);
    printf("over!\n");
    return 0;
}
