#include <stdio.h>
#define SSSV(s1, s2, s3, v) s1 = length * width; s2 = length * height; s3 = width * height; v = width * length * height;
int main(void){
    int length = 3, width = 4, height = 5;
    int ss1, ss2, ss3, vv;
    SSSV(ss1, ss2, ss3, vv);
    printf("ss1=%d, ss2=%d, ss3=%d, vv=%d\n", ss1, ss2, ss3, vv);
    return 0;
}
