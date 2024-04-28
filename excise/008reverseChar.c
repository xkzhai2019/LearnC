#include <stdio.h>
void printChar(){
    char c;
    scanf("%c",&c);
    if(c!='!'){
        printChar();
        printf("%c",c);
    }
}

int main(void){
    printChar();
    return 0;
}
