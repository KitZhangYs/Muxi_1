#include<stdio.h>

int main(){
    int N,t,i,j;
    float max,students[101]={0.0};
    scanf("%d",&N);
    for (i=0;i<N;i++){
        scanf("%d",&t);
        for (j=0;j<t;j++){
            scanf("%f",&students[j]);
        }
        max=students[0];
        for (j=0;j<t;j++){
            if (students[j]>max){
                max=students[j];
            }
        }
        printf("%.2f\n",max);
    }
    return 0;
}