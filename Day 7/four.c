#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Exchange first and last element
    int temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;

    printf("Array after exchanging first and last elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}