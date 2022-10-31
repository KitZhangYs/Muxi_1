#include <stdio.h>
#include <string.h>

int main(){
	char a[1001];
	int b[10]={0};
	int i;
	scanf("%s",a);
	int len=strlen(a);
	for (i=0;i<len;i++){
		b[a[i]-'0']++;
	}
	for (i=0;i<10;i++){
		if (b[i]!=0)
			printf("%d:%d\n",i,b[i]);
	}
	return 0;
}
