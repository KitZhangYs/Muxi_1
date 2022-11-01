#include <stdio.h>

int main(){
    char pr;
    int n,i,j,k;
    scanf("%d %c",&n,&pr);
    if(n%2==1)
        k=(n/2)+1;
    else
        k=n/2;
    for (i=0;i<k;i++){
        if(i==0||i==k-1){
            for (j=0;j<n;j++)
                putchar(pr);
        }
        else{
            for (j=0;j<n;j++){
                if (j==0||j==n-1)
                    putchar(pr);
                else
                    putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}
