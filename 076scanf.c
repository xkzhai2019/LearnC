#include <stdio.h>

int main(void){
    int i;
    float f;
    char name[15];

    scanf("%3d",&i);
    //scanf("%*[^\n]");scanf("%*c");// 清空缓冲区
    scanf("%5f",&f);
    //scanf("%*[^\n]");scanf("%*c");// 清空缓冲区
    scanf("%6s",name);
    printf("i=%d,f=%f,name=%s\n",i,f,name);

    return 0;
}
