#include <stdio.h>

int main() {
    int n, i, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Exchange alternate elements*/
    for(i = 0; i < n - 1; i += 2) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    printf("Array after exchanging alternate elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


