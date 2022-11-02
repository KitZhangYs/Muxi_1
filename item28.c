#include <stdio.h>
#include <string.h>

int main(){
    char a[1000];
    int n,i,j;
    scanf("%d",&n);
    for ( i = 0; i < n; i++){
        scanf("%s",a);
        int m=0;
        for(j=0;j<strlen(a);j++){
            if (a[j]>='0' && a[j]<='9')
                m++;
        }
        printf("%d\n",m);
    }
    return 0;
}