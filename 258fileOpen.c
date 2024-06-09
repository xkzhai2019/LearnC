#include <stdio.h>

int main(void){
    FILE *fp = fopen("data.txt","r");
    if(fp==NULL){
        printf("文件打开失败\n");
    }
    return 0;
}
