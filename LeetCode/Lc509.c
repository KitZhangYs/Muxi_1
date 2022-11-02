#include <stdio.h>

int fib(int n){
    int F[31]={0,1};
    for(int i=2;i<31;i++){
        F[i]=F[i-1]+F[i-2];
    }
    return F[n];
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",fib(n));
    return 0;
}