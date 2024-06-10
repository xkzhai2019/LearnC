//利用fgetc,fputc复制文本文件
#include <stdio.h>
int fileCopy(char *srcFile, char *destFile){
    FILE *fpSrc;
    FILE *fpDest;
    char ch;
    if((fpSrc=fopen(srcFile,"rb"))==NULL){
        printf("文件打开失败\n");
        return -1;
    }
    fpDest = fopen(destFile,"wb");
    while((ch=fgetc(fpSrc))!=EOF){
        fputc(ch,fpDest);
    }
    fclose(fpSrc);
    fclose(fpDest);
    return 0; 
}

int main(void){
    //char srcFile[20] = "夜曲.mp3";
    //char destFile[20] = "夜曲copy.mp3";
    char srcFile[20] = "data.txt";
    char destFile[20] = "data_copy.txt";
    fileCopy(srcFile,destFile);
    printf("over!\n");
    return 0;
}
