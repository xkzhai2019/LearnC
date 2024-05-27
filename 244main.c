#include <stdio.h>

int main(int argc, char *argv[]){
 
    int i;
    printf("本程序接收了 %d 份数据:\n", argc);
    for(i=0; i<argc; i++){
        printf("%s\n", argv[i]);
    }
    return 0;
}
