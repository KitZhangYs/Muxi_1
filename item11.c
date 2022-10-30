#include<stdio.h>

int main(){
	int people[100000];
	int n,m;
	while (scanf("%d%d",&n,&m)!=EOF){
		if (n==0&&m==0)
			break;
		int i;
		for (i=0;i<n;i++){
			scanf("%d",&people[i]);
		}
		int end=n;
		while (end){
			for (i=0;i<n;i++){
				if(people[i-1]<people[i]){
					int tem = people[i];
					people[i]=people[i-1];
					people[i-1]=tem;
				}
			}
			end--;
		}
		if (n>=m){
			for(i=0;i<m;i++){
				printf("%d ",people[i]);
			}
		}else{
			for(i=0;i<n;i++){
				printf("%d ",people[i]);
			}
		}
		putchar('\n');
	}
}
