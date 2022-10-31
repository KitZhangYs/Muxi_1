#include<stdio.h>
#include<math.h>

int main(){
	double r1,p1,r2,p2;
	scanf("%lf%lf%lf%lf",&r1,&p1,&r2,&p2);
	double R_part,F_part;
	double a,b,c,d;
	a=cos(p1);
	b=sin(p1);
	c=cos(p2);
	d=sin(p2);
	R_part=r1*a*r2*c-r1*b*r2*d;
	F_part=r1*a*r2*d+r1*b*r2*c;
	if (fabs(R_part)<0.01)
		R_part=0;
	if (fabs(F_part)<0.01)
		F_part=0;
	if (F_part<0)
		printf("%.2f%.2fi\n",R_part,F_part);
	else
		printf("%.2f+%.2fi\n",R_part,F_part);
	return 0;
}
