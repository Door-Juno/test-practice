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

void find_primes() {
    sieve[0] = sieve[1] = 0;
    for (int i = 2; i <= MAX; i++) {
        sieve[i] = 1;
    }

    for (int i = 2; i * i <= MAX; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                sieve[j] = 0;
            }
        }
    }
}