#include <stdio.h>

typedef unsigned long long long_t;

int cnt = 0;

void collatz(long_t n);

int main(){
    int N;
    scanf("%d", &N);
    collatz(N);
    printf("\n%d", cnt);
}


void collatz(long_t n){
    cnt ++; 
    if(n == 1) {
        printf("%llu",n);
    }
    else{
        printf("%llu ", n);
        (n%2 == 0) ? collatz( n/2) : collatz (3 *n +1);
    }
}