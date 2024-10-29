#include <stdio.h>
#include <math.h>

#define MAX 32  // 배열 크기 설정

// 소인수 분해 후 결과를 배열에 저장하는 함수
unsigned factorize(unsigned n, unsigned a[]) {
    unsigned cnt = 0;  // 소인수 배열 크기
    unsigned sqrtn = (unsigned)sqrt(n);  // n의 제곱근을 구함

    for (unsigned i = 2; i <= sqrtn; i++) {
        while (n % i == 0) {  // i로 나누어 떨어지면
            a[cnt++] = i;  // 소인수를 배열에 저장
            n /= i;  // n을 나눈 값으로 갱신
        }
    }

    if (n > 1) {  // 마지막 남은 값이 소수이면
        a[cnt++] = n;  // 그것도 소인수로 저장
    }

    return cnt;  // 소인수 배열의 크기 반환
}

int main() {
    unsigned N, a[MAX], len, p, cnt;
    
    scanf("%u", &N);  // N을 입력받음
    len = factorize(N, a);  // N을 소인수 분해하여 소인수 배열에 저장

    // 소인수를 오름차순으로 카운트하여 출력
    p = a[0];
    cnt = 0;
    for (unsigned i = 0; i < len; i++) {
        if (p == a[i]) {
            cnt++;  // 같은 소인수의 개수 증가
        } else {
            printf("%u %u\n", p, cnt);  // 소인수와 개수 출력
            p = a[i];
            cnt = 1;  // 새로운 소인수로 초기화
        }
    }
    printf("%u %u\n", p, cnt);  // 마지막 소인수와 개수 출력

    return 0;
}
