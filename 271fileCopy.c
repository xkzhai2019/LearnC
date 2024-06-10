//利用fread,fwrite复制文本文件/二进制文件
#include <stdio.h>
#include <stdlib.h>
int fileCopy(char *srcFile, char *destFile){
    FILE *fpSrc;
    FILE *fpDest;
    int len = 1024;
    //char *buffer = (char*)malloc(len); // 开辟缓存
    char buffer[1025];
    if((fpSrc=fopen(srcFile,"rb"))==NULL){
        printf("文件打开失败\n");
        return -1;
    }
    fpDest = fopen(destFile,"wb");
    int readCount;
    while((readCount=fread(buffer,1,len,fpSrc))>0){
        fwrite(buffer,1,readCount,fpDest);
    }
    //free(buffer);
    fclose(fpSrc);
    fclose(fpDest);
    return 0; 
}
int main(void){
    char srcFile[20] = "夜曲.mp3";
    char destFile[20] = "夜曲copy.mp3";
    fileCopy(srcFile,destFile);
    printf("over!\n");
    return 0;
}
