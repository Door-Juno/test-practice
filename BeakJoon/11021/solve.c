#include <stdio.h>

int main(){
    int N ; 
    int A, B;
    scanf("%d",&N);

    for(int i = 1 ;i <= N ; i ++){
        scanf("%d %d",&A,&B);
        printf("Case #%d: %d\n",i,A+B);
    }
}