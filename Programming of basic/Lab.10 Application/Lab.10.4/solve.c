#include <stdio.h>
#include <math.h>

typedef unsigned long long long_t;

// 소인수의 합을 구하는 함수
long_t sum_factors(long_t n) {
    long_t sum = 0;
    long_t original = n;
    long_t limit = (long_t)sqrt(n);

    // 소인수 찾기
    for (long_t i = 2; i <= limit; i++) {
        while (n % i == 0) {
            sum += i;
            n /= i;
        }
    }

    // n이 1보다 크면 마지막 소인수는 n 자신이다.
    if (n > 1) {
        sum += n;
    }

    // 소수인 경우는 자신을 제외해야 한다.
    if (sum == original) {
        return 0;
    }

    return sum;
}

int main() {
    long_t n, m, maxcnt, maxval;
    scanf("%llu %llu", &n, &m);  // 범위 입력

    maxcnt = maxval = 0;
    for (long_t i = n; i <= m; i++) {
        long_t s = sum_factors(i);  // 각 수의 소인수 합 구하기
        if (s > maxcnt) {
            maxcnt = s;
            maxval = i;
        }
    }

    printf("%llu\n", maxval);  // 소인수의 합이 가장 큰 수 출력
    printf("%llu\n", maxcnt);  // 그 수의 소인수의 합 출력

    return 0;
}
