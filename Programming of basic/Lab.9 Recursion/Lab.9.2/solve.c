#include <stdio.h>

typedef unsigned long long ull_t ;
ull_t gcd(ull_t n, ull_t m);
ull_t lcm(ull_t n, ull_t m);
ull_t solve(int n);

int main(){
    int N ;
    scanf("%d",&N);
    printf("%llu",solve(N));
}

ull_t gcd(ull_t n, ull_t m){
    if( m == 0 )return n ;
    else return gcd(m,n%m);
}

ull_t lcm(ull_t n, ull_t m){
    return n * m / gcd(n,m);
}

ull_t solve(int n){
    ull_t LCM ;
    scanf("%llu",&LCM);
    if( n == 1 ){
        return LCM;
    }
    return lcm(solve(n-1),LCM);
}