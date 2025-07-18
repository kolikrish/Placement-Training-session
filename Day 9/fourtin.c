// Search a given element among all the 2D array (Linear search).

#include <stdio.h>

int main() {
    int search, found = 0;

    int arr[3][3];
    int i, j;

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter the elements : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(arr[i][j] == search) {
                printf("Element %d found at position [%d][%d]\n", search, i, j);
                found = 1;
            }
        }
    }

    if(!found) {
        printf("Element %d not found in the matrix.\n", search);
    }

    return 0;
}
