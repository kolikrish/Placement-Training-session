// Calculate the sum of all the column elements.

#include <stdio.h>

int main() {

    int arr[3][3];
    int colSum = 0;
    int i, j;

    printf("Enter elements of matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter the elements : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }


    for(j = 0; j < 3; j++) {
        for(i = 0; i < 3; i++) {
            colSum += arr[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }

    return 0;
}
