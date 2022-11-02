#include <stdio.h>

int main(){
    int N,M,out[101]={0},student[101][101]={{0}},True[101]={0},scores[101]={0},i,j;
    scanf("%d%d",&N,&M);
    for(i=0;i<M;i++){
        scanf("%d",&out[i]);
    }
    for(i=0;i<M;i++){
        scanf("%d",&True[i]);
    }
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            scanf("%d",&student[i][j]);
            if (student[i][j]==True[j]){
                scores[i]+=out[j];
            }
        }
        printf("%d\n",scores[i]);
    }
    return 0;
}