#include <stdio.h>
#include <math.h>

int is_prime(int n){
    if(n==0||n == 1) return 0;
    for(int i = 2 ; i <= sqrt(n) ;i++){
        if( n % i == 0 ) return 0;
    }
    return 1; 
}   

int main(){
    int N ; 
    int num, cnt = 0;
    scanf("%d",&N);
    for(int i = 0 ; i < N ; i ++){
        scanf("%d",&num );
        cnt += is_prime(num);
    }
    printf("%d",cnt);
}