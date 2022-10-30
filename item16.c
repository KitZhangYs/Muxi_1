#include <stdio.h> 
#include<ctype.h>     
int main()
{
	char str;
	int a[5];
	int n;
	scanf("%d\n",&n); 
	while(n--){             
	    a[0]=a[1]=a[2]=a[3]=a[4]=0;
	    while ((str = getchar()) != '\n'){
			switch(tolower(str)){ 
				case 'a':
					a[0]++;
					break;
				case 'e':
					a[1]++;
					break;
				case 'i':
					a[2]++;
					break;
				case 'o':
					a[3]++;
					break;
				case 'u':
					a[4]++;
					break;
				default:
					break;
			}	
		}
		printf("a:%d\n",a[0]);  
		printf("e:%d\n",a[1]);  
		printf("i:%d\n",a[2]);  
		printf("o:%d\n",a[3]);  
		printf("u:%d\n",a[4]);  
 	        if(n)
		       printf("\n"); 
	}
	return 0;
}
