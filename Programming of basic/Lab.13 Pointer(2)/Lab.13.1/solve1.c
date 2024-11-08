#include <stdio.h>
#define SIZE 100

// Function to find the maximum element in the matrix and its position
int *mmax(int n, int m, int *A, int *a, int *b) {
    int max = -0x80000000; // Initialize to the minimum possible int
    int *maxp = NULL;       // Pointer to store the address of the maximum element

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int index = i * m + j; // Calculate the index in the flattened array
            if (A[index] > max) {  // If current element is greater than max
                max = A[index];    // Update max value
                maxp = &A[index];  // Store pointer to this element
                *a = i;            // Update row index
                *b = j;            // Update column index
            }
        }
    }
    return maxp; // Return pointer to the maximum element
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int A[SIZE * SIZE]; // Flattened array to store matrix elements

    // Input the matrix elements in flattened form
    for (int i = 0; i < n * m; i++) {
        scanf("%d", &A[i]);
    }

    int i, j;
    int *maxptr = mmax(n, m, A, &i, &j); // Call the mmax function

    // Output the maximum value, its value through matrix, and its position
    printf("%d %d %d %d\n", *maxptr, A[i * m + j], i, j);

    return 0;
}
