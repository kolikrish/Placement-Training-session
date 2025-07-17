#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j;

    printf("Enter elements of matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter the elements : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        int max = arr[i][0];
        for(j = 1; j < 3; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
        printf("Greatest element in row %d = %d\n", i + 1, max);
    }

    return 0;
}

