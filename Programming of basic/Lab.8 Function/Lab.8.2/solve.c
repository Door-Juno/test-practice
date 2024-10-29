#include <stdio.h>
#include <math.h>


typedef unsigned long long ulong_t ;
typedef unsigned int uint_t;

uint_t divcnt(uint_t n);
void solve(uint_t N,uint_t M);

int main(){
    uint_t N,M;
    scanf("%u %u",&N,&M);
    solve(N,M);
}

uint_t divcnt(uint_t n){
    uint_t cnt = 0 ;
    for(uint_t i = 1 ; i <= sqrt(n) ; i++ ){ // i의 자료형 주의
        if(n%i == 0){
            cnt += 2;
            if(i == sqrt(n)){
                cnt--;
            }
        }
    }
    return cnt;
}

void solve(uint_t N,uint_t M){
    uint_t result = 0;  
    uint_t largest = 0; 
    

    for (ulong_t i = N; i <= M; i++) {
        uint_t cnt = divcnt(i);  
        
        if (cnt > largest) {
            largest = cnt;
            result = i;
        }
        if(cnt == largest)
            result = i; 
    }

    printf("%u\n", result);  
    printf("%u\n", largest); 
}
