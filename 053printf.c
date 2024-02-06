#include <stdio.h>

int main(void){
    int a11 = 20, a12 = 234, a13 = 567, a14 = 12;
    int a21 = 56789, a22 = 9999, a23 = 2048, a24 = 1;
    int a31 = 333, a32 = 200, a33 = 2, a34 = 6666;
    int a41 = 33, a42 = 0, a43 = 22, a44 = 12345678;

    printf("%d\t%d\t%d\t%d\n",a11,a12,a13,a14);
    //printf("%d\t%d\t%d\t%d\n",a21,a22,a23,a24);
    printf("%d\t%d\t%d\t%d\n",a44,a22,a23,a24);
    printf("%d\t%d\t%d\t%d\n",a31,a32,a33,a34);
    printf("%d\t%d\t%d\t%d\n",a41,a42,a43,a44);

    return 0;
}
