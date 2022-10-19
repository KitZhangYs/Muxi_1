#include<stdio.h>

int f1(int a,int b){
	if (a>100||a<0||b>100||b<0){
		return 0;
	}else if (a<60||b<60){
		return 1;
	}else {
		return 2;
	}
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	switch (f1(a,b)){
		case 0:
			printf("it is error.\n");
			break;
		case 1:
			printf("it is not pass.\n");
			break;
		case 2:
			printf("it is pass.\n");
			break;
	}

	return 0;
}
