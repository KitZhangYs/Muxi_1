#include <stdio.h>

int main(){
	int a,b,min,common,i;
	while (scanf("%d%d",&a,&b)!=EOF){
		if (a>b)
			min=b;
		else
			min=a;
		for (i=1;i<=min;i++){
			if (a%i==0&&b%i==0)
				common=i;
		}
		printf("%d\n",a*(b/common));
	}
	return 0;
}
