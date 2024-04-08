#include <stdio.h>

int main(void){
    char a[10]; // 一维字符数组
    char b[2][3]; // 二维字符数组
    char c[10] = {'u','s','t','s'}; // 给部分字符数组元素赋值，其余自动赋值为空字符（0）
    char d[] = {'u','s','t','s'}; // 给全部元素赋值
    for(int i=0;i<10;i++){
        printf("%c ",c[i]);
    }
    printf("\n");

    char str1[] = "usts";
    char str2[] = {"usts.edu.cn"};
    char str3[10];
    //str3 = "usts";
    for(int i=0;i<5;i++){
        printf("%c",str1[i]);
    }
    printf("\n");
    for(int i=0;i<12;i++){
        printf("%c",str2[i]);
    }
    printf("\n");
    char str4[] = "abc123";
    char str5[] = {'a','b','c','1','2','3'};
    printf("length of str4 is %d\n",sizeof(str4)/sizeof(str4[0]));
    printf("length of str5 is %d\n",sizeof(str5)/sizeof(str5[0]));


    return 0;
}
