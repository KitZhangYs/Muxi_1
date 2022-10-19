#include <stdio.h>

int main(){
	int x,i,j;
	for (i=1;i<=5;i++){
		switch (i){
			case 1:
				j=1; break;
			case 2:
				j=2; break;
			case 3:
				j=3; break;
			case 4:
				j=2; break;
			case 5:
				j=1; break;
		}

		switch (j){
			case 1:
				for (x=0;x<5;x++){
					if (x==4){
						puts("*");
					}else{
						printf("*");
					}
				}
				break;
			case 2:
				for (x=0;x<4;x++){
					if (x==3){
						puts("*");
					}else if (x==0){
						printf(" ");
					}else{
						printf("*");
					}
				}
				break;
			case 3:
				printf("  ");
				puts("*");
				break;
		}
	}

	return 0;
}

