#include <stdio.h>

char str[100];
void printChar(){
    int i=0;
    while(1){
        char c;
        scanf("%c",&c);
        if(c!='!'){
            str[i] = c;
            i++;
        }else{
            break;
        }
    }
    for(int j=i-1;j>=0;j--){
        printf("%c",str[j]);
    } 
}
int main(void){
    printChar();
    return 0;
}
