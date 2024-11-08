#include <stdio.h>
#define SIZE 100

// Function to add two matrices A and B, and store the result in C
void madd(int n, int m, int (*x)[SIZE], int (*y)[SIZE], int *z) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            *(z + i * SIZE + j) = x[i][j] + y[i][j]; // Calculate C[i][j] = A[i][j] + B[i][j]
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];

    // Input matrix A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Perform matrix addition and store result in C
    madd(n, m, A, B, &C[0][0]);

    // Output the result matrix C
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
