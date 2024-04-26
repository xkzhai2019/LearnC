#include <stdio.h>
int main(void){
    int N,M;
    scanf("%d %d", &N,&M);
    int a[N+1];
    for(int i=1;i<N+1;i++){
        a[i] = 1;
    }
    int count = 0;
    int num = 0;
    while(1){
        for(int i=1;i<N+1;i++){
            if(a[i]==0){
                continue;
            }
            count++;
            if(count==M){
                printf("%d ",i);
                a[i] = 0;
                count = 0;
                num++;
            }
        }
        if(num==N){
            break;
        }

    }
    
    return 0;
}
