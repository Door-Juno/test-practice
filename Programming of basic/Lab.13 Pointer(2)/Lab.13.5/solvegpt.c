#include <stdio.h>
#include <string.h>
#define SIZE 100

// 문자열 내의 두 문자 위치를 바꾸는 함수
void swap(char *s, int i, int j) {
    char temp =s[i];
    s[i] = s[j];
    s[j] = temp ;
}

// 버블 정렬을 통해 문자열을 오름차순으로 정렬하는 함수
void bubblesort(int n , char *s) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(s+j)>*(s+j+1)) {
                swap(s,j, j+1);
            }
        }
    }
}

// 두 문자열이 애너그램인지 확인하는 함수
int is_anagram(int n, char *s1, char *s2) {
    // 두 문자열을 정렬
    bubblesort(n, s1);
    bubblesort(n, s2);

    // 정렬된 두 문자열을 비교
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            return 0;  // 다르면 애너그램이 아님
        }
    }
    return 1;  // 모든 문자가 같으면 애너그램
}

int main() {
    int n;
    char str1[SIZE], str2[SIZE];
    
    // 문자열 길이와 두 문자열 입력
    scanf("%d", &n);
    scanf("%s", str1);
    scanf("%s", str2);
    
    // 애너그램 여부 확인 및 출력
    printf("%s\n", is_anagram(n, str1, str2) ? "yes" : "no");

    return 0;
}
