#include <stdio.h>

int cnt = 0 ;

int frog(int n ){
    cnt ++ ;
    if( n == 1 ) return 1;
    if( n == 2 ) return 2;
    if( n == 3 ) return 4;

    return frog(n-1) + frog(n-2) + frog(n-3);
}

int main(){
    int n ;
    scanf("%d",&n);
    printf("%d\n",frog(n));
    printf("%d\n",cnt);
}