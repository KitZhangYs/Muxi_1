#include<stdio.h>

int main(){
    int T,A,B,i;
    scanf("%d",&T);
    for (i=0;i<T;i++){
        scanf("%d%d",&A,&B);
        if (A%B==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}