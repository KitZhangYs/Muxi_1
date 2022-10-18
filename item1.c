#include<stdio.h>

int main(){
	int a,b,c,res;
	scanf("%d%d%d",&a,&b,&c);
	
	if (a+b>c&&b+c>a&&a+c>b){
		if (a==b&&b==c){
			printf("1\n");
		}else if (a==b||a==c||b==c){
			printf("2\n");
		}else{
			printf("3\n");
		}
	}else{
		printf("0\n");
	}
	return 0;
}
