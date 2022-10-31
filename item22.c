#include <stdio.h>

int main (){
    int C1,C2;
    scanf("%d%d",&C1,&C2);
    int res;
    res=(int)((C2 - C1) * 1.0 / 100 + 0.5);
    printf("%02d:%02d:%02d\n",res/3600,(res%3600)/60,(res%3600)%60);
    return 0;
}
