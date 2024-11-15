#include <stdio.h>
#include <math.h>

int gcd(int n, int m){ // 유클리드 호제법 O(log N )
    if (m==0) return n;
    return gcd(m,n%m); 
}

int lmc(int n, int m){
    return (n * m) / gcd(n,m);
}


int main(){
    int N,M ;
    scanf("%d %d",&N,&M);
    printf("%d\n%d",gcd(N,M),lmc(N,M));
    
}