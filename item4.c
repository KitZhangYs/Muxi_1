#include <stdio.h>

int main(){
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	
	do{
		c=a%b;
		d=a/b;
		if(c!=0){
			a=b;
			b=c;
		}
	}while(c!=0);

	printf("%d\n",b);

	return 0;
}
