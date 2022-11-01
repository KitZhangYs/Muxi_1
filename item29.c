#include <stdio.h>

int main(){
    int n[101]={0},N,i,j,sum=0,a[11];
    scanf("%d",&N);
    for (i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
            if (i!=j){
                if (n[a[i]*10+a[j]]==0){
                    n[a[i]*10+a[j]]=1;
                    sum+=(a[i]*10+a[j]);
                }
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
