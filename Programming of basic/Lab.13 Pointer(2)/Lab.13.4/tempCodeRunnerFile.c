#include <stdio.h>
#define SIZE 100

// 회문 판별 함수
int is_palindrome(char *s, char *t);

int main()
{
    int n;
    char str[SIZE];
    
    // 문자열 길이 및 내용 입력
    scanf("%d", &n);
    scanf("%s", str);
    
    // 회문 여부 판별 및 출력
    printf("%s\n", is_palindrome(str, str + n - 1) ? "yes" : "no");

    return 0;
}

// 회문 판별 함수 정의
int is_palindrome(char *s, char *t)
{
    // 문자열의 시작과 끝을 비교하며 중앙으로 이동
    while (s < t)
    {
        if (*s != *t)  // 서로 다른 문자가 있으면 회문이 아님
            return 0;
        s++;  // 시작 포인터 오른쪽으로 이동
        t--;  // 끝 포인터 왼쪽으로 이동
    }
    return 1;  // 회문이면 1 반환
}
