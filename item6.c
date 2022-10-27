#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void Find_abs_Max(int a[]){
	int temp,i,j;
	for (i=1;i<=a[0];i++){
		for (j=1;j<i;j++){
			if(abs(a[i])>abs(a[j])){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

int main(){
	int nums[101];
	int i;
	while(scanf("%d",&nums[0])!=EOF){
		if (nums[0]==0)
			break;
		else
			for (i=1;i<=nums[0];i++){
				scanf("%d",&nums[i]);
			}
		Find_abs_Max(nums);

		for (i=1;i<nums[0];i++)
			printf(" %d",nums[i]);
		printf(" %d\n",nums[nums[0]]);
	}
	
	return 0;
}
