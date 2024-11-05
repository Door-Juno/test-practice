#include <stdio.h>

int main(){
    int N ;
    int a,b;
    scanf("%d",&N);

    while(~scanf("%d %d",&a,&b)){
        printf("%d\n",a+b);
        N--;
        if(N == 0 ){
            break;
        }
    }
}