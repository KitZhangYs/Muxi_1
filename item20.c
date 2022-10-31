#include<stdio.h>

int main(){
	int m;
	int n[101];
	float res;
	scanf("%d",&m);
	int i,j;
	for (i=0;i<m;i++)
		scanf("%d",&n[i]);
	for (i=0;i<m;i++){
		res=0;
		for (j=0;j<n[i];j++){
			switch ((j+1)%2){
				case 0:
					res-=(1.0/(j+1)); break;
				case 1:
					res+=(1.0/(j+1)); break;
				default:
					break;
			}
		}
		printf("%.2f\n",res);
	}
	return 0;
}
