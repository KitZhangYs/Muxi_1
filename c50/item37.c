#include <stdio.h>
#include <string.h>

int main(){
    int N,nums[1001][2]={{0}},Num[1001],i;
    char s[1001][17],S[1001][17];
    scanf("%d",&N);
    for (i=0;i<N;i++){
        scanf("%s %d %d",s[i],&nums[i][0],&nums[i][1]);
        strcpy(S[nums[i][0]],s[i]);
        Num[nums[i][0]]=nums[i][1];
    }
    int n,k;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&k);
        printf("%s %d\n",S[k],Num[k]);
    }
    return 0;
}