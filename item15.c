#include <stdio.h>

int main(){
	int T[1001];
	while (scanf("%d",&T[0])!=EOF){
		int i;
		for (i=1;i<=T[0];i++){
			scanf("%d",&T[i]);
		}
		for (i=1;i<=T[0];i++){
			putchar(T[i]);
		}
	}
	return 0;
}
