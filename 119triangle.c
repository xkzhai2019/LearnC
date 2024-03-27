#include <stdio.h>
int main(void){
    int line;
    printf("请输入行数(大于等于3):");
    scanf("%d",&line);
    for(int i=1;i<=line;i++){
        if(i!=line){
            for(int j=1;j<=2*line-1;j++){
                if(j==line-(i-1)||j==line+(i-1)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }else{
            for(int j=1;j<=2*line-1;j++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
