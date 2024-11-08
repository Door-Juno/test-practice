#include <stdio.h>
#define SIZE 10

// 3차원 배열에서 최대값을 찾는 함수
int *mmmax(int n, int m, int p, int *ptr, int *a, int *b, int *c);

int main()
{
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);  // 배열의 크기 입력
    int A[SIZE][SIZE][SIZE];  // 3차원 배열 선언

    // 배열 입력
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < p; k++)
                scanf("%d", &A[i][j][k]);
        }
    }

    int i, j, k;
    // 최대값 찾기 함수 호출
    int *maxptr = mmmax(n, m, p, &A[0][0][0], &i, &j, &k);
    printf("%d %d %d %d %d\n", *maxptr,A[i][j][k], i, j, k);  // 최대값 및 위치 출력
}

int *mmmax(int n, int m, int p, int *ptr, int *a, int *b, int *c){
    int max = ptr[0];
    int *maxp;

    for(int i =0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j ++){
            for(int k = 0 ; k < p ; k ++){
                int cnt = *(ptr + i * SIZE * SIZE + j * SIZE+ k);
                if( cnt > max){
                    max =cnt;
                    maxp = ptr + i * SIZE * SIZE + j * SIZE + k;
                    *a = i;
                    *b = j;
                    *c = k;
                }
            }
        }
    }
    return maxp;  // 최대값 포인터 반환
}
