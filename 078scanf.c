#include <stdio.h>

int main(void){
    char name[15];
    scanf("%[a-zA-Z]",name);
    printf("%s\n",name);

    return 0;
}
