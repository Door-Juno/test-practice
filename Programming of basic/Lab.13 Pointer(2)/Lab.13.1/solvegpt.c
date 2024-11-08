#include <stdio.h>
#define SIZE 100


int *mmax(int n, int m, int *x, int *y, int A[SIZE][SIZE]) {
    int max = -0x80000000; 
    int *maxp = NULL;  

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] > max) {  
                max = A[i][j];     
                maxp = &A[i][j];  
                *x = i;           
                *y = j;           
            }
        }
    }
    return maxp; 
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int A[SIZE][SIZE];

  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int i, j;
    int *maxptr = mmax(n, m, &i, &j, A);

  
    printf("%d %d %d %d\n", *maxptr, A[i][j],i, j);

    return 0;
}
