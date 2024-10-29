#include <stdio.h>
#define ROW 10 
#define COL 10

int main() {
    int N,M,A[ROW][COL];
    scanf("%d %d\n",&N, &M);
    for(int i = 0; i < N ; i ++ ){
        for(int j = 0 ; j < M ; j ++){ // i = N , j = M
            scanf("%d",&A[i][j]); // array A 입력
        }
    }
    for(int i = 0; i < M;i++){
        for(int j = 0 ; j < N; j++){
            printf("%d",A[j][i]); // i = M , j = N
            if(j < N-1) printf(" ");
        }
        printf("\n");
    }
}