#include <stdio.h>
#include <float.h>

int main(void){
    
    double unnormal_dbl_min = 4.9E-324;
    printf("最小的非规格化double: %e \n",unnormal_dbl_min);
    printf("最小的规格化double: %e \n",DBL_MIN);
    printf("最大的规格化double: %e \n",DBL_MAX);

    printf("最小的非规格化double/2: %e \n",unnormal_dbl_min/2);
    printf("最小的规格化double/2: %e \n",DBL_MIN/2);
    printf("最大的规格化double*2: %e \n",DBL_MAX*2);
    return 0;
}   
