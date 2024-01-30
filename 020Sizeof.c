#include <stdio.h>

int main(void){
    
    short s = -1;
    int i = 10;

    int short_len = sizeof s;
    int int_len = sizeof(i);
    int long_len = sizeof(long);
    int llong_len = sizeof(long long);

    printf("short=%d, int=%d, long=%d, llong=%d\n",short_len,int_len,
            long_len,llong_len);
    return 0;
}
