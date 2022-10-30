#include<stdio.h>

int Scan_num;
#define NUMBER Scan_num

int search_idx(const int v[],int idx[],int key,int n){
	int i,num;
	for (i=0;i<n;i++){
		if (v[i]==key){
			idx[num]=i;
			num++
		}
	}

	return num
}

int main(){
	printf("输入元素数量："); scanf("%d",&Scan_num);
	int num[NUMBER];
	int idx[NUMBER]
	int i,key,res;
	for (i=0;i<NUMBER;i++){
		printf("%d号：",i+1); scanf("%d",&num[i]);
	}
	
	printf("输入你要查找的数字："); scanf("%d",&key)
	res=search_idx(num,idx,key,NUMBER);

	if(res==0){
		printf("查找失败\n");
	}else{
		printf("查找成功，有%d个",res);
		for (i=0;i<NUMBER;i++){
			if(i==0){
			printf("%d ",idx[i]);
			}else{
				if(idx[i]!=0){
					printf("%d ",idx[i]);
				}
			}
		}
	}
	return 0;
}
