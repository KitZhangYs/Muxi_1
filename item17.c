#include<stdio.h>
#include<math.h>

int issushu(int k){
	if(k==2)
	return 1;
	for(int i=2;i<sqrt(k)+1;i++){
		if(k%i==0)
		return 0;	
	}
	return 1; 
}

int main(){
	int n,m,nums[10001],k=0;
	int i,j=0;
	scanf("%d%d",&m,&n);
	for(i=2;j<10001;i++){
		if(issushu(i))
			nums[j++]=i;	
	}	
	for(i=m;i<=n;i++){
		printf("%d",nums[i-1]);
		k++;
		if(k%10==0)
		printf("\n");
		else if(i!=n)
		printf(" ");	
	}	
}
