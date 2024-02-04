#include <stdio.h>

int main(void){
    int sum = 1025;
    int count = 10;
    double avg1 = sum / count;
    double avg2 = (double) sum / count;
    printf("avg1: %f, avg2: %f\n", avg1, avg2);

    return 0;
}
