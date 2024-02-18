#include <stdio.h>

int main(void){
    char name[15];
    scanf("%[abcd]",name);
    printf("%s\n",name);

    return 0;
}
