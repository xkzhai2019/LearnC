#include <stdio.h>

int main(void){
    int age = 10, apple_num = 20;
    printf("age = %d, apple_num = %d\n",age,apple_num);
    ++age; // 11
    --apple_num; // 19
    printf("age = %d, apple_num = %d\n",age,apple_num);
    age++; // 12
    apple_num--; // 18
    printf("age = %d, apple_num = %d\n",age,apple_num);
    return 0;
}
