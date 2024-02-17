#include <stdio.h>
#include <unistd.h>

int main(void){

    printf("苏州科技大学");
    //printf("苏州科技大学\n");
    fflush(stdout); // 立刻清空缓冲区
    sleep(5); // 程序暂停5秒
    printf("程序设计与算法语言\n");
    return 0;
}
