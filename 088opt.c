#include <stdio.h>

int main(void){
    char c = 'b';
    int i = 1, j = 2, k = 3;
    float x = 3E5, y = 0.5;
    int r1 = 'a' + 1 < c, r2 = x - 5.5<= x+y;
    // 关系运算符的优先级低于算术运算符，高于赋值运算符
    printf("%d, %d\n", r1, -i-2*j>=k+1);
    printf("%d, %d\n", 1<j<5, r2);
    printf("%d\n", 3<j<1);
    printf("%d, %d\n", i+j+k==-2*j, k==j==i-1);

    return 0;
}
