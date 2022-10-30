#include<stdio.h>

int Scan_num;
#define NUMBER Scan_num

void rev_intary(int v[],int n){
	int temp,i;
	for (i=0;i<n/2;i++){
		temp=v[i];
		v[i]=v[n-1-i];
		v[n-1-i]=temp;
	}
	puts("倒序排列了。");
	for (i=0;i<n;i++){
		printf("%d号:%d\n",i+1,v[i]);
	}
}

int main(){
	printf("请输入人数");
	scanf("%d",&Scan_num);
	int num[NUMBER];
	int i;
	for (i=0;i<NUMBER;i++){
		printf("%d号:",i+1);
		scanf("%d",&num[i]);
	}
	rev_intary(num,NUMBER);

	return 0;
}
