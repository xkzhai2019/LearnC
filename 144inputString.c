#include <stdio.h>

int main(void){
    char name[20] = {0};
    char email[20] = {0};
    char addr[20] = {0};

    printf("请输入姓名：");
    gets(name);
    printf("请输入邮箱地址：");
    scanf("%s",email);
    printf("请输入通讯地址：");
    scanf("%s",addr);

    puts(name);
    puts(email);
    puts(addr);
    return 0;
}
