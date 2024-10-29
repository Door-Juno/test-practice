#include <stdio.h>
#define true 1 
#define false 0 
typedef unsigned long long long_t;

int main () {
    long_t N ;
    scanf("%llu",&N);
    int leading = true , one = 0 , zero = 0 ;
    for ( int i = 63 ; i >= 0 ; i --){
        int bit =  (N>>i)&1;
        if(leading && bit == 0 ) 
            continue ;
        leading = false ; 
        (bit) ? one ++ : zero ++ ;
    }
    printf("%d\n", one);
    printf("%d\n", zero);
}