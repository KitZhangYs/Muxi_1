#include <stdio.h>

int main(){
	int n,i;
	int num=2;
	for (i=1;i<=100;i++){
		if (i==2||i==3){
			printf("%3d ",i);
		}
		if (i>4){
			for(n=2;n<i/2;n++){
				if (i%n==0)
					break;
			}
		}
		if (n==(i/2)&&i!=1){
			printf("%3d ",i);
			num++;
			if (num%5==0){
                 	       putchar('\n');
	                }
		}
	}

	return 0;
}
