#include <stdio.h>

int main(void){
    char *lines[5] = {"xkzhai","@","usts","edu","12345cn"};
    char *str1 = lines[1];
    char *str2 = *(lines+3);// lines+3 == &lines[3] 
    //char *str2 = lines + 3; 
    char c1 = *(*(lines+4)+6);// *(lines[4] + 6)
    char c2 = (*lines+5)[5]; // lines
    char c3 = *lines[0] + 2;

    printf("str1 = %s\n",str1);// @
    printf("str2 = %s\n",str2);// edu
    printf("c1 = %c\n",c1); // n
    printf("c2 = %c\n",c2); // s 
    printf("c3 = %c\n",c3);// z

    return 0;
}
