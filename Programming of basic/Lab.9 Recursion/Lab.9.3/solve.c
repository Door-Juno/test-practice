#include <stdio.h>

typedef unsigned long long long_t;

int cnt = 0; // 전역변수global varuable

void collatz(long_t n );

int main(){
    int N ;
    scanf("%d",&N);
    collatz(N);
    printf("\n%d",cnt);
}

void collatz(long_t n){
    cnt ++; 
    printf("%llu ",n);
    if(n == 1) {
        printf("\b");
        return ;
    }
    else if (n%2 == 0) return collatz(n / 2);
    else collatz(3 * n + 1 ); 
}
