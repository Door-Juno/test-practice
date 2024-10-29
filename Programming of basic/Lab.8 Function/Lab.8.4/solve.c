#include <stdio.h>
#include <stdbool.h>


int is_prime(unsigned int n) {
    if (n < 2) return 0;  
    for (unsigned int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;  
    }
    return 1;
}


int prime_cnt(int N, int M) {
    int cnt = 0;


    for (int i = N; i <= M; i++) {
        if (is_prime(i)) {
            cnt++;  
        }
    }

    return cnt;
}

int main() {
    int N, M;

    scanf("%d %d", &N, &M);
    printf("%d\n", prime_cnt(N, M));

    return 0;
}
