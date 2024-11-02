#include <stdio.h>

int main(){
    int x,N,a,b;
    int sum= 0;

    scanf("%d",&x);
    scanf("%d",&N);
    for(int i = 0 ; i < N; i++){
        scanf("%d %d",&a,&b);
        sum += a * b;
    }
    (sum == x) ? printf("Yes") : printf("No");
}