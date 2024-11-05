#include <stdio.h>

int add(int n, int m, int a, int b, int c, int d, int *ptr) {
    // Calculate the index in the 1D array representation
    int index1 = a * m + b;
    int index2 = c * m + d;
    
    // Return the sum of the elements at the calculated indices
    return ptr[index1] + ptr[index2];
}

int main() {
    int n, m, a, b, c, d;
    int arr[100];  // Assuming a maximum size for simplicity

    // Input dimensions of the 2D array
    scanf("%d %d", &n, &m);

    // Input indices a, b and c, d
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Input elements of the 2D array in row-major order
    for (int i = 0; i < n * m; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the result of the addition
    printf("%d\n", add(n, m, a, b, c, d, arr));

    return 0;
}
