#include <stdio.h> //행렬 곱

int main() {
    int N,K,M;
    scanf("%d %d %d",&N,&K,&M);

    int A[N][K], B[N][M], C[N][M];
    //A 입력
    for(int i = 0 ; i < N; i++){ 
        for(int j = 0 ; j < K; j++){
            scanf("%d",&A[i][j]); 
        }
    }

    //B입력
    for(int i = 0 ; i < K; i++){
        for(int j = 0 ; j < M; j++){
            scanf("%d",&B[i][j]);
        }
    }
    
    // C초기화 및 입력
    for(int i = 0 ; i < N ; i++){
        for(int j = 0; j < M ; j ++){
            C[i][j] = 0 ;
            for(int k = 0; k < K; k++){
                C[i][j] += A[i][k] * B[k][j];  // 행렬 곱 알면 이해됨 .
            }
        }
    }
    for(int i = 0; i < N; i ++){
        for(int j = 0 ; j < M; j ++){
            printf("%d", C[i][j]);
            if(j < M-1 ) printf(" ");
        }
        printf("\n");
    }
}