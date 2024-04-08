#include <stdio.h>

int main(void){
    int scores[5][3] = {{90,130,80},{87,102,85},{99,145,91},
        {75,80,70},{90,90,70}};
    int scores_c[5][3] = {90,130,80,87,102,85,99,145,91,75,80,
        70,90,90,70};
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            printf("%d ",scores_c[i][j]);        
        }
        printf("\n");
    }
    return 0;
}
