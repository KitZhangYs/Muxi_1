#include<stdio.h>

int main(){
    int N[101]={0},n,i,k;
    while(scanf("%d",&n)!=EOF){
        if(n==0){
            break;
        }
        k=0;
        for (i=0;i<n;i++){
            scanf("%d",&N[i]);
            if (N[i]/100!=0){
                k+=N[i]/100;
            }
            N[i]%=100;
            if (N[i]/50!=0){
                k+=N[i]/50;
            }
            N[i]%=50;
            if (N[i]/10!=0){
                k+=N[i]/10;
            }
            N[i]%=10;
            if (N[i]/5!=0){
                k+=N[i]/5;
            }
            N[i]%=5;
            if (N[i]/2!=0){
                k+=N[i]/2;
            }
            N[i]%=2;
            k+=N[i];
        }
        printf("%d\n",k);
    }
    return 0;
}