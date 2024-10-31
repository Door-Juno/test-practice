#include <stdio.h>

#define MAX 100
int square[MAX][MAX];

// 모든 행의 합이 마방진 상수와 같은지 확인
int check_rows(int n, int magic) {
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += square[i][j];
        }
        if (sum != magic) return 0;
    }
    return 1;
}

// 모든 열의 합이 마방진 상수와 같은지 확인
int check_cols(int n, int magic) {
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += square[i][j];
        }
        if (sum != magic) return 0;
    }
    return 1;
}

// 대각선 합이 마방진 상수와 같은지 확인
int check_diag(int n, int magic) {
    int sum_main = 0, sum_secondary = 0;
    for (int i = 0; i < n; i++) {
        sum_main += square[i][i];
        sum_secondary += square[i][n - 1 - i];
    }
    return (sum_main == magic && sum_secondary == magic);
}

// 1부터 N^2까지의 숫자가 한 번씩만 나타나는지 확인
int check_uniq(int n) {
    int counts[MAX * MAX + 1] = {0};  // 등장 횟수를 추적하는 배열 초기화
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int val = square[i][j];
            if (val < 1 || val > n * n || counts[val] > 0) return 0;
            counts[val]++;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);  // 행렬의 크기 N 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &square[i][j]);  // 행렬의 각 원소 입력
        }
    }

    int magic = 0;
    for (int j = 0; j < n; j++) {
        magic += square[0][j];  // 첫 번째 행의 합을 마방진 상수로 설정
    }

    // 모든 조건이 만족되면 마방진 상수를 출력, 아니면 0 출력
    if (check_rows(n, magic) && check_cols(n, magic) && check_diag(n, magic) && check_uniq(n)) {
        printf("%d", magic);
    } else {
        printf("0");
    }

    return 0;
}
