#include <stdio.h>

int main() {
    int num, square = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        square = i*i;
    }

    printf("Square of %d is %d\n", num, square);

    return 0;
}