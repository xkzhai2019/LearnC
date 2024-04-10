#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int maxC = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int C = a[i] + a[j] + a[k];
                int maxA = (a[i] > a[j] ? a[i]:a[j] ) > a[k] ? (a[i] > a[j] ? a[i]:a[j]):a[k];
                if(maxA<C-maxA && C>maxC){
                    maxC = C;
                }
            }
        }
    }
    printf("%d\n",maxC);
    return 0;
}
