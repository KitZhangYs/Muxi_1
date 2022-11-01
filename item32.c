#include <stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n/100;i++)
        printf("B");
    n%=100;
    for (i=0;i<n/10;i++)
        printf("S");
    n%=10;
    for (i=1;i<=n;i++)
        printf("%d",i);
    putchar('\n');
    return 0;
}
