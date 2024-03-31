#include <stdio.h>
// 统计从键盘输入一行字符的个数
int main(void){
    int count = 0;
    while(getchar()!='\n'){
        count++;
    }
    return 0;
}
