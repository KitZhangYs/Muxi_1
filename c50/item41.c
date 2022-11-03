#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char a[1001];
    int n[123]={0},i,max,len;
    scanf("%[^\n]",a);
    len=strlen(a);
    for (i=0;i<len;i++){
        if (islower(a[i])){
            n[a[i]]++;
        }else if(isupper(a[i])){
            n[a[i]+32]++;
        }
    }
    max=n[97];
    for (i=97;i<=122;i++){
        if(n[i]>max)
            max=n[i];
    }
    for (i=97;i<=122;i++){
        if(n[i]==max){
            printf("%c %d\n",i,n[i]);
            break;
        }
    }
    return 0;
}