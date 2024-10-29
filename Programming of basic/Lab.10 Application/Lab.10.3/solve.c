#include <stdio.h>
#include <math.h>

unsigned factors[100];  // 소인수를 저장할 배열
unsigned factor_cnt = 0; // 소인수 개수 카운터

// 소인수 분해 함수
void factorize(unsigned n) {
    unsigned sqrtn = (unsigned)sqrt(n);  // n의 제곱근을 구함
    for (unsigned i = 2; i <= sqrtn; i++) {
        while (n % i == 0) {  // i로 나누어 떨어지면
            factors[factor_cnt++] = i;  // i를 소인수로 저장
            n /= i;  // n을 i로 나눈 값으로 갱신
        }
    }
    if (n > 1) {
        // 남은 n이 1보다 크면 그것도 소인수임
        factors[factor_cnt++] = n;
    }
}

int main() {
    unsigned N;
    scanf("%u", &N);  // 입력받은 N
    
    factor_cnt = 0;  // 소인수 카운터 초기화
    factorize(N);  // N을 소인수 분해
    
    for (unsigned i = 0; i < factor_cnt; i++) {
        printf("%u ", factors[i]);  // 소인수 출력
    }
    printf("\n");

    return 0;
}
