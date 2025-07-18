// Calculate the Sum of all the rows elements.

#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j, RowSum = 0;

    printf("Enter elements of matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter the elements : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            RowSum += arr[i][j];
        }
        printf("\nSum of row %d = %d\n",i+1, RowSum);
    }


    return 0;
}
