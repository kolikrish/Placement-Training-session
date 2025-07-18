// Find out the smallest element in matrix.

#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j;

    printf("Enter elements of matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    int min = arr[0][0];

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    printf("\nSmallest element in the matrix = %d\n", min);

    return 0;
}
