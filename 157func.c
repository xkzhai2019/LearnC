#include <stdio.h>
int sum(){
    int ret=0;
    for(int i=1;i<=100;i++){
        ret += i;
    }
    return ret;
}

int main(void){
    int a = sum();
    printf("和为%d\n",a);
    return 0;
}
