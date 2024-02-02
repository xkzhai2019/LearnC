#include <stdio.h>

int main(void){
    
    //float f_i = 1;
    int i = 1.2;
    int i2 = 255.6;
    int i3 = 1;

    //printf("f_i: %f\n",f_i);
    printf("i: %d, %f\n",i,i);
    printf("i2: %d, %f\n",i2,i2);
    printf("i2: %d, %lf\n",i2,1);
    printf("i3: %d, %lf\n",i3,i3);
    printf("i3: %le\n",i3);

    return 0;
}
