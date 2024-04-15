#include <stdio.h>
void func2(){
    printf("嵌套函数\n");
}
void func1(){
    printf("usts\n");
    func2();
}
int main(void){
    func1();
    return 0;
}
