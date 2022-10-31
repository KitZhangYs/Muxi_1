#include <stdio.h>
#include <math.h>

int main(){
    int nums[10001][3];
    int n,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        for (j=0;j<2;j++){
            scanf ("%d",&nums[i][j]);
        }
        nums [i][2]=(nums[i][0]*nums[i][0])+(nums[i][1]*nums[i][1]);
    }
    int max=0;
    for (i=0;i<n;i++){
        if(nums[i][2]>max)
            max=nums[i][2];
    }
    float end;
    end=sqrt(max);
    printf("%.2f\n",end);
}
