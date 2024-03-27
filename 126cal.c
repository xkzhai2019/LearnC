#include <stdio.h>
int main(void){
    float ret = 0.0;
    for(int i=1;;i++){
        float tmp = 1.0/(2*i-1);
        if(i%2==0){
            ret -= tmp;
        }else{
            ret += tmp;
        }
        if(tmp<=1e-6) break;
    }
    printf("ret: %.6f\n",ret);
    return 0;
}
