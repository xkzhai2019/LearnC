#include <stdio.h>
int max(int f1,  int f2, int f3){
    return (f1 > f2 ? f1:f2) > f3 ? (f1 > f2 ? f1:f2):f3;
}

int main(void){
    float i1 = 10;
    float i2 = 20;
    printf("%d\n",max(i1+30,i2,40));

    return 0;
}
