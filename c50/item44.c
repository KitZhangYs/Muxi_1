#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int i,j,N,Z[101][2]={{0,0}},n=0,K[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[12]={'1','0','X','9','8','7','6','5','4','3','2'};
    char nums[101][20];
    scanf("%d",&N);
    for (i=0;i<N;i++){
        scanf("%s",nums[i]);
    }
    for (i=0;i<N;i++){
        for (j=0;j<17;j++){
            if(isdigit(nums[i][j])) {
                Z[i][0]+=((int)(nums[i][j]-'0'))*K[j];
            }else{
                Z[i][1]=1;
                n++;
            }
        }
        if(M[Z[i][0]%11]!=nums[i][17]){
            Z[i][1]=1;
            n++;
        }
    }
    int k=0;
    if (n==0){
        printf("All passed\n");
    }else{
        for (i=0;i<N;i++){
            for(j=N-1;j>0;j--){
                if(Z[j][1]==1){
                    k=j;
                    break;
                }
            }
            if (Z[i][1]==1){
                printf("%s",nums[i]);
                if(i!=k){
                    putchar('\n');
                }
            }
        }
    }
}
