#include<stdio.h>

void Calculation1(const float a[50][5],float b[],int n,int m){
	int i,j;
	for (i=0;i<n;i++){
		b[i]=0;
		for (j=0;j<m;j++){
			b[i]+=a[i][j];
		}
		b[i]/=m;
	}
}

void Calculation2(const float a[50][5],float b[],int n,int m){
	int i,j;
	for (i=0;i<m;i++){
		b[i]=0;
		for(j=0;j<n;j++){
			b[i]+=a[j][i];
		}
		b[i]/=n;
	}
}

int Switch_Passed(const float a[50][5],const float b[],int n,int m){
	int i,j,k=0,res=0;
	for (i=0;i<n;i++){
		k=0;
		for (j=0;j<m;j++){
			if (a[i][j]>b[j])
				k++;
		}
		if (k==m)
			res++;
	}
	return res;
}

int main(){
	float Score[50][5];
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF){
		if (n<=0||n>50||m<=0||m>5)
			break;
		int i,j;
		for (i=0;i<n;i++){
			for(j=0;j<m;j++){
				Score[i][j]=0;
			}
		}
		float average[n];
		float Average[m];
		int num;
		for (i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%f",&Score[i][j]);
			}
		}
			Calculation1(Score,average,n,m);
			Calculation2(Score,Average,n,m);
			num=Switch_Passed(Score,Average,n,m);
			for(i=0;i<n;i++){
				printf("%.2f ",average[i]);
			}
			putchar('\n');
			for(i=0;i<m;i++){
				printf("%.2f ",Average[i]);
			}
			putchar('\n');
			printf("%d\n",num);
			putchar('\n');
	}
}
