#include <stdio.h>

#define MAX 10

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

// 버블 정렬 함수: 주어진 배열을 오름차순으로 정렬
void bubblesort(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a, j, j + 1);
            }
        }
    }
}

// 숫자의 자릿수를 배열에 저장하고 길이를 반환
int scan(int n, int a[]) {
    int i = 0;
    while (n > 0) {
        a[i++] = n % 10;
        n /= 10;
    }
    return i;
}

// 두 배열이 같은지 비교
int comp(int n, int a[], int b[]) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

int main() {
    int n, t, m, a[MAX], b[MAX], cnt = 0;

    // N과 M 입력
    scanf("%d %d", &n, &t);

    // N의 자릿수를 a 배열에 저장하고 정렬
    int len = scan(n, a);
    bubblesort(len, a);

    // 입력된 수들의 애너그램 개수를 계산
    for (int i = 0; i < t; i++) {
        scanf("%d", &m);
        
        // 각 테스트할 수의 자릿수를 b 배열에 저장하고 정렬
        int lenm = scan(m, b);
        bubblesort(lenm, b);

        // 자릿수 길이가 같고 정렬된 배열이 같으면 애너그램으로 판단
        if (len == lenm && comp(len, a, b)) {
            cnt++;
        }
    }


    printf("%d\n", cnt);

    return 0;
}
