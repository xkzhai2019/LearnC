#include <stdio.h>
//#define STR(s) s
#define STR(s) #s

int main(void){
    printf("STR:%s\n",STR(hello,C));
    printf("STR:%s\n",STR("hello,C"));
    return 0;
}
