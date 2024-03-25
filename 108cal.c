#include <stdio.h>

int main(void){
    int data1,data2;
    char opt;
    int ret;
    scanf("%d%c%d",&data1,&opt,&data2);
    switch(opt){
        case '+':
            ret = data1 + data2;
            printf("%d%c%d=%d\n",data1,opt,data2,ret);
            break;
        case '-':
            ret = data1 - data2;
            printf("%d%c%d=%d\n",data1,opt,data2,ret);
            break;
        case '*':
            ret = data1 * data2;
            printf("%d%c%d=%d\n",data1,opt,data2,ret);
            break;
        case '/':
            printf("%d%c%d=%f\n",data1,opt,data2,(double)data1/data2);
            break;
    }

    return 0;
}
