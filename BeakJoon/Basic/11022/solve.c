#include <stdio.h>

int main(){
    int N ; 
    int a,b;
    scanf("%d",&N);
    for(int i = 1 ; i <= N ; i ++){
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d + %d = %d\n",i,a,b,a+b);
    }
}