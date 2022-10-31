#include<stdio.h>

int main(){
	int path[1001];
	int i,n;
	while(scanf("%d",&n)!=EOF){
		if (n==0)
			break;
		path[1]=0;
		path[2]=2;
		path[3]=2;
		path[4]=6;
		for (i=5;i<=n;i++)
			path[i]=(path[i-2]*2+path[i-1])%10000;
		printf("%d\n",path[n]);
	}
	return 0;
}
