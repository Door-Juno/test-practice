#include <stdio.h>
#include <stdbool.h>

int is_prime(unsigned int n) {
    if (n < 2) return 0; 
    for (unsigned int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; 
    }
    return 1;
}

unsigned int solve(unsigned int N) {
    unsigned int B = 0, n;

    for (int i = 0; i < N; i++) {
        scanf("%d", &n); 

        // n이 소수이면 비트 1, 소수가 아니면 밀어서 0으로 만들기 
        if (is_prime(n)) {
            B = (B << 1) | 1;
        } else {
            B = B << 1; 
        }
    }

    return B;
}

int main() {
    unsigned int N;


    scanf("%d", &N);
    printf("%X\n", solve(N));

    return 0;
}
