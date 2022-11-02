#include <stdio.h> 

int main(){
    int N,A,a,B,b,sum,a_drink=0,b_drink=0;
    scanf("%d",&N);
    int i;
    for (i=0;i<N;i++){
        scanf("%d%d%d%d",&A,&a,&B,&b);
        if(A+B==a&&A+B!=b)
            b_drink++;
        if(A+B==b&&A+B!=a)
            a_drink++;
    }
    printf("%d %d\n",a_drink,b_drink);
    return 0;
}