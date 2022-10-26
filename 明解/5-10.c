#include<stdio.h>

int main(){
	int a[4][3];
	int b[3][4];
	int res[4][4];
	int i,j,J,c;
	for (i=0;i<4;i++){
		for (j=0;j<3;j++){
			printf("a[%d][%d]:",(i+1),(j+1));
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<4;j++){
			printf("b[%d][%d]:",(i+1),(j+1));
			scanf("%d",&b[i][j]);
		}
	}
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			c=0;
			for (J=0;J<3;J++){
				c+=a[i][J]*b[J][j];
			}
			res[i][j]=c;
			printf("%d ",res[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
