#include <stdio.h>

int main(void){
    char name[15];
    char id[10];
    char email[20];
    scanf("%[^0-9]",name);
    scanf("%*[^\n]");scanf("%*c");
    scanf("%[^\n]",id);

    printf("name: %s\n id: %s\n",name,id);
    scanf("%*[^\n]");scanf("%*c");
    scanf("%15[^0-9\n]",email);
    printf("email: %s\n",email);

    return 0;
}
