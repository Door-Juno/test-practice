#include <stdio.h>
#include <math.h>
#define MAX 1000000

int sieve[MAX + 1];

void find_primes();
int count(int n);
void solve(int n);

int main(){
    int N;
    scanf("%d",&N);
    find_primes();
    solve(N);
}

int count(int n){
    int cnt = 0;
    for(int i = 3 ; i <= n/2 ; i ++){
        if(sieve[i] && sieve[n-i]){
            cnt++ ;
        }
    }
    return cnt ;
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

void solve(int n){
    int cnt = count(n);
    
    if (cnt >= 100) {
        printf("%d\n", cnt); // 소수 쌍이 100개 이상일 경우 개수만 출력
    } 
    else {
        // 소수 쌍 출력
        for (int i = 3; i <= n / 2; i++) {
            if (sieve[i] && sieve[n - i]) { // i와 n-i가 모두 소수일 때
                printf("%d %d\n", i, n - i); // a <= b 조건을 만족함
            }
        }
    }   
}

