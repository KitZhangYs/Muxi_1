#include<stdio.h>
#include<string.h>

int main(){
    int year,month,day,num=0,N,max=20140907,min=18140905,age,i;
    char Oldest[6],Youngest[6],name[6];
    scanf("%d",&N);
    for (i=0;i<N;i++){
        scanf("%s %d/%d/%d",name,&year,&month,&day);
        age=year*10000+month*100+day;
        if (age>18140905&&age<20140907){
            num++;
            if (age<max){
                max=age;
                strcpy(Oldest,name);
            }
            if (age>min){
                min=age;
                strcpy(Youngest,name);
            }
        }
    }
    printf("%d",num);
    if (num!=0)
        printf(" %s %s",Oldest,Youngest);
    putchar('\n');
    return 0;
}