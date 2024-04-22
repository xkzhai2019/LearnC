#include <stdio.h>

int n = 10;  //全局变量
void func1(){
    int n = 20;  //局部变量
    printf("func1 n: %d\n", n);
}
void func2(int n){
    printf("func2 n: %d\n", n);
}
void func3(){
    printf("func3 n: %d\n", n);
}
int main(){
    int n = 30;  //局部变量
    func1(); // func1 n: 20
    func2(n); //func2 n: 30
    func3(); // func3 n: 10
    //代码块由{}包围
    {
        int n = 40;  //局部变量
        printf("block n: %d\n", n); // block n: 40
    }
    printf("main n: %d\n", n); // main n: 30

    return 0;
}
