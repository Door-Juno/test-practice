#include <stdio.h>

int gcd (int n , int m );
int lcm (int n , int m );

int main() {
    int N,M ;
    scanf("%d %d",&N,&M);
    printf("%d\n",gcd(N,M));
    printf("%d\n",lcm(N,M));
}

int gcd(int n , int m) {
    if(m == 0) return n ;
    else return gcd(m,n%m); 
}

int lcm(int n, int m){
    return n*m / gcd(n,m);
}