#include<stdio.h>

int Scan_num;
#define NUMBER Scan_num

int min_of(const int v[],int n){
	int min=v[0];
	int i;

	for (i=0;i<n;i++){
		if (v[i]<min){
			min=v[i];
		}
	}

	return min;
}

int main(){
	printf("请输入数组元素个数"); scanf("%d",&Scan_num);
	int i;
	int number[NUMBER];
	for (i=0;i<NUMBER;i++){
		printf("number[%d]:",i); scanf("%d",&number[i]);
	}

	printf("最小值为：%d\n",min_of(number,NUMBER));

	return 0;
}
