#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	int n,i,b[4],count_type,count_num;
	char ch;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		memset(b,0,sizeof(b));
		count_type=0;count_num=0;
		while((ch=getchar())!='\n')
		{
			if(isupper(ch)&&b[0]==0) {
				b[0]=1;count_type++;
			}
			else if(islower(ch)&&b[1]==0){
				b[1]=1;count_type++;
			} 
			else if(isdigit(ch)&&b[2]==0){
				b[2]=1;count_type++;
			}
			else if(b[3]==0&&(ch=='~'||ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^')){
				b[3]=1;count_type++;
			}
			count_num++;
		}
		if(count_type>=3&&count_num>=8&&count_num<=16)
			puts("YES");
		else 
            puts("NO");
	}
	return 0;
}
