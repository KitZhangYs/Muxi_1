#include<stdio.h>

void Find_min(int a[]){
    int min,i,n=1;
    min=a[1];
    for ( i = 1; i <= a[0] ; i++){
        if (min>a[i]){
            min=a[i];
            n=i;
        }
    }
    a[n]=a[1];
    a[1]=min;
}

int main(){
    int nums[101];
    while(scanf("%d",&nums[0])!=EOF){
        if (nums[0]<=0){
            break;
        }
        int i;
        for (i=1;i<=nums[0];i++){
            scanf("%d",&nums[i]);
        }
        Find_min(nums);
        for (i=1;i<=nums[0];i++){
            printf("%d ",nums[i]);
        }
	putchar('\n');
    }
    return 0;
}
