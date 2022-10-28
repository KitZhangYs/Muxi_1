#include<stdio.h>

int main(){
    int n,times;
    scanf("%d",&n);
    while (n!=1){
        if (n%2!=0){
            n=(3*n+1)/2;
        }else{
            n=n/2;
        }
        times++;
    }
    printf("%d",times);
    return 0;
}
