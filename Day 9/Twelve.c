#include <stdio.h>

int main() {

    int arr[3][3];
    int i, j;

    printf("Enter elements of matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("enter the elements : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    int max = arr[0][0];

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Greatest element in the matrix = %d\n", max);

    return 0;
}
