#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int a[n], b[n], temp;
    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    printf("After exchanging:\n");
    printf("First array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nSecond array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}