#include <stdio.h>

int main(){
    int A,a,B,b,pa=0,pb=0,i;
    scanf("%d%d%d%d",&A,&a,&B,&b);
    for (;A!=0;A/=10){
        if(A%10==a){
            pa*=10;
            pa+=a;
        }
    }
    for (;B!=0;B/=10){
        if(B%10==b){
            pb*=10;
            pb+=b;
        }
    }
    printf("%d\n",pa+pb);
    return 0;
}
