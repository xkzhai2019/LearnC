#include <stdio.h>

int main(void){
    int i = 123456;
    double f = 3.1415926;

    printf("i: %.9d %.4d\n",i,i);
    printf("f: %.2lf %.4lf %.10lf\n",f,f,f);
    printf("%.5s %.15s\n","abcdefg","abcdefg");

    return 0;
}
