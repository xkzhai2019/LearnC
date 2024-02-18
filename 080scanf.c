#include <stdio.h>

int main(void){
    int i;
    char name[15];

    scanf("%*d %d",&i);
    scanf("%*[a-z]");
    scanf("%[^0-9]",name);
    printf("i: %d, name: %s\n",i,name);

    return 0;
}
