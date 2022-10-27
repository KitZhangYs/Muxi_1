#include<stdio.h>

//题设为每组数据必有至少一个奇数，故无需判断是否有奇数
//该函数用于计算奇数乘积
int Odd_Multiplication(int a[],int n){
	int res=1;
	int i;
	for (i=0;i<n;i++){
		if (a[i]%2==1)
			res*=a[i];
	}
	return res;
}

int main(){
	int n;
	while (scanf("%d",&n)!=EOF){
		if (n==0)
			break;
		int nums[n];
		int i;
		for (i=0;i<n;i++)
			scanf("%d",&nums[i]);
		i=Odd_Multiplication(nums,n);
		printf("%d\n",i);
	}
	return 0;	
}
