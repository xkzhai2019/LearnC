#include <stdio.h>
char table[] = {'0','1','2','3','4',
    '5','6','7','8','9','A','B',
    'C','D','E','F'};
void decToM(int X,int M){//10 --> 1010
    if(X!=0){
        decToM(X/M,M);
        printf("%c",table[X%M]);
    }

}
int main(void){
    int X,M;
    char str[100] = {0};
    scanf("%d %d",&X,&M);
    decToM(X,M);
    return 0;
}
