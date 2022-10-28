#include <stdio.h>

int Judge_Leap_year(int a){
	if (a%4==0&&a%100!=0){
		return 29;
	}else if (a%400==0){
		return 29;
	}else{
		return 28;
	}
}

int main(){
	int year,month,day;
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	while (scanf("%d/%d/%d",&year,&month,&day)!=EOF){
		days[1]=Judge_Leap_year(year);
		int i,n=0;
		for(i=0;i<(month-1);i++){
			n+=days[i];
		}
		n+=day;
		printf("%d\n",n);
	}
	return 0;
}
