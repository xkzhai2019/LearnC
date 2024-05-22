#include <stdio.h>

int main(void){
    char str[20] = {0};

    for(int i = 0;i<10;i++){
        *(str+i) = 'a' + i;
    }
    printf("%s\n",str); // abcdefghij
    printf("%s\n",str+2);// cdefghij
    printf("%c\n",str[2]);// c
    printf("%c\n",(str+2)[2]); //e 

    return 0;
}
