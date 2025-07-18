#include <stdio.h>
void SumArray();

int main() {

    SumArray();
    return 0;
}


void SumArray() {
    int arr[3][3][3];
    int i,j,k;
    int sum = 0;

    printf("Enter elements of the 3D array:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                printf("Enter the values : ");
                scanf("%d",arr[i][j][k]);
            }
            printf("\n");
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                sum += arr[i][j][k];
            }
        }
    }

    printf("Sum of all elements: %d\n", sum);
}
