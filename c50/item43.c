#include<stdio.h>

int main(){
    int a[501][501]={{0}},M,N,A,B,i,j,n;
    scanf("%d%d%d%d%d",&M,&N,&A,&B,&n);
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            if(a[i][j]>=A&&a[i][j]<=B){
                a[i][j]=n;
            }
            printf("%03d",a[i][j]);
            if(j!=(N-1)){
                putchar(' ');
            }else{
                putchar('\n');
            }
        }
    }
    return 0;
}