#include <stdio.h>
#include <math.h>

typedef unsigned long long ull_t;

ull_t divsum(ull_t n );

int main() {
    ull_t N ;
    scanf("%llu",&N);
    printf("%llu\n",divsum(N));
}

ull_t divsum(ull_t n){
    ull_t sum = 0 ;
    for(int i = 1 ; i <= sqrt(n) ; i ++){
        if(n % i == 0 ){
            sum += i;
            sum += n/i;
            if(i == sqrt(n)){
                sum -= i;
            }
        }
    }
    return sum ;
}
