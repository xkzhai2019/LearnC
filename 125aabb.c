#include <stdio.h>
int main(void){
    int x;
    int former; // x的前两位
    int latter; // x的后两位
    //枚举所有可能的平方根
    for(int i=1;;i++){
        x = i*i;
        if(x<1000) continue;
        if(x>9999) break;
        former = x/100;
        latter = x%100;
        if(former%10==former/10 && latter%10==latter/10){
            printf("%d是aabb型平方数\n",x);
        }
    }
    return 0;
}
