#include <stdio.h>

int main(void){
    int a[5][3] = {{1},{2},{3}};
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);        
        }
        printf("\n");
    }    
    return 0;
}
