#include <stdio.h>
#include <math.h>

int is_prime(unsigned int n );

int main(){
    int N ;
    scanf("%d",&N);
    if(N == 1){
        printf("not prime");
    }
    else if (is_prime(N)){
        printf("prime");
    }
    else{
        printf("composite");
    }
}

int is_prime(unsigned int n ){
    for(int i = 2 ; i < sqrt(n) ; i++){
        if( n % i == 0)
            return 0 ;
    }
    return 1 ;
}