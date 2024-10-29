#include <stdio.h>
#include <math.h>
#define MAX 10000000


int sieve[MAX + 1];

void find_primes();

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    find_primes();
    int cnt = 0;
    for(int i = N ; i <= M ; i++){
        if (sieve[i]) cnt ++;
    }
    printf("%d",cnt);
}

void find_primes(){
    sieve[0] = sieve[1]= 0;
    for(int i = 2; i <= MAX ; i++){
        sieve[i]= 1;
    } // 지정 범위 1로 설정
    for(int i = 2; i<= sqrt(MAX);i++){
        if(sieve[i] ==1){ // 소수라면 배수 삭제
            for(int j = 2; i*j <= MAX ; j += i){ // MAX범위 안까지만 탐색하면 됨.
                sieve[i*j] = 0;
            }
        }
    }
}