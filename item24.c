#include <stdio.h>
#include <string.h>

int main(){
	char a[101];
	int b[101];
	int sum=0;
	int i,k=-1;
	scanf("%s",a);
	for (i=0;i<strlen(a);i++){
		sum += (int)(a[i]-'0');
	}
	int n;
	for (n=sum;n!=0;n/=10){
		k++;
		b[k]=n%10;
	}
	for (i=k;i>=0;i--){
		switch (b[i]){
			case 0:
				printf("ling"); break;
			case 1:
				printf("yi"); break;
			case 2:
				printf("er"); break;
			case 3:
				printf("san"); break;
			case 4:
				printf("si"); break;
			case 5:
				printf("wu"); break;
			case 6:
				printf("liu"); break;
			case 7:
				printf("qi"); break;
			case 8:
				printf("ba"); break;
			case 9:
				printf("jiu"); break;
		}
		if (i!=0)
			putchar (' ');
	}
	putchar('\n');

	return 0;
}
