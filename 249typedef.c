#include <stdio.h>
typedef int(*PTR_TO_FUNC)(int,int);
typedef char (*PTR_TO_ARR)[10];

int max(int a,int b){
    return a>b?a:b;
}
char str[3][10]={
    "xkzhai","usts","edu"
};

int main(void){
    PTR_TO_FUNC pfunc = max;
    PTR_TO_ARR pstr = str;
    printf("max(10,20):%d\n",pfunc(10,20));
    for(int i=0;i<3;i++){
        printf("str[%d]:%s\n",i,*(pstr+i));
    }
    return 0;
}
