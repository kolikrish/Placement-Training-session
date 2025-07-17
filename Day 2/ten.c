#include <stdio.h>
int main() {

    int i, j ,n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        for(j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1