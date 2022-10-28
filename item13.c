#include<stdio.h>

int main(){
    long  nums[10][3];
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%ld%ld%ld",&nums[i][0],&nums[i][1],&nums[i][2]);
    }
    for (i=0;i<n;i++){
        if ((nums[i][0]+nums[i][1])>nums[i][2])
            printf("Case #%d: true\n",i+1);
        else
            printf("Case #%d: false\n",i+1);
    }
    return 0;
}
