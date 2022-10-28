#include <stdio.h>

int main() {
	int a,b;
	double c[51][6],d[6],f=0;
	int n,m,x;
	while(scanf("%d%d",&a,&b)!=EOF) {
		for(int i=0; i<a; i++) {
			for(int j=0; j<b; j++) {
				scanf("%lf",&c[i][j]);
			}
		}
		x=0;

		for(int i=0; i<a; i++) {
			for(int j=0; j<b; j++) {
				f+=c[i][j];
			}
			if(x>0){
				printf(" ");
			}
			x++;
			printf("%.2lf",f/b);			
			f=0;
		}
		printf("\n");
		x=0;

		for(int i=0; i<b; i++) {
			for(int j=0; j<a; j++) {
				f+=c[j][i];
			}
			if(x>0){
				printf(" "); 
			}
			x++;
			d[i]=f/a;
			printf("%.2lf",d[i]);
			f=0;
		}
		printf("\n");
		x=0;	
		n=0;
		m=0;

		for(int i=0; i<a; i++) {
			for(int j=0; j<b; j++) {
				if(c[i][j]>=d[j]) {
					m++;
				}
			}
			if(m==b) {
				n++;
				m=0;
			} else {
				m=0;
			}
		}
		printf("%d\n",n);
		printf("\n");
	}
	return -1;
}

