#include <stdio.h>
#define MAX 100

void rotate(int n, int A[][MAX], int B[][MAX]){
    for(int i = 0 ; i<n; i++){
        for(int j = 0 ; j < n; j++){
            B[j][n-1-i]= A[i][j];
        }
    }
}

int main(){
    int n, A[MAX][MAX], B[MAX][MAX];
    scanf("%d", &n);
    for(int i =0 ; i<n; i++){
        for(int j = 0 ; j < n; j++){
            scanf("%d",&A[i][j]);
        }
    }
    rotate(n,A,B);
    for(int i = 0; i < n; i++){
        for(int j = 0; j<n ; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
}