#include <stdio.h>

int main(void){
    char name[10];
    char email[20];
    gets(name);
    printf("name: %s\n",name);
    gets(email);
    printf("email: %s\n",email);
    
    return 0;
}
