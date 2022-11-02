#include<stdio.h>

int main(){
    int T,K,i,Tt;
    scanf("%d%d",&T,&K);
    Tt=T;
    for (i=0;i<K;i++){
        int n1,b,t,n2;
        scanf("%d%d%d%d",&n1,&b,&t,&n2);
        if (Tt==0){
            printf("Game Over.\n");
            break;
        }else if (Tt<t){
            printf("Not enough tokens.  Total = %d.\n",Tt);
        }else if(((n1-n2)>0 && !b)||((n1-n2)<0 && b)){
            Tt+=t;
            printf("Win %d!  Total = %d.\n",t,Tt);
        }else{
            Tt-=t;
            printf("Lose %d.  Total = %d.\n",t,Tt);
        }
    }
    return 0;
}
