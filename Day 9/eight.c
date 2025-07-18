// calculate the sum of non - diagonal elements of square matrix in C.

#include <stdio.h>

int main() {
    int n, i, j;
    int sum = 0;

    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j && (i + j) != (n - 1)) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of non-diagonal elements: %d\n", sum);

    return 0;
}
