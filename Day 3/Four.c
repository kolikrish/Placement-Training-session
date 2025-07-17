#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d", &a);

    printf("Enter two integers: ");
    scanf("%d", &b);

    printf("\n");

    printf("%d is %s\n", a, (a % 2 == 0) ? "Even" : "Odd");
    printf("%d is %s\n", b, (b % 2 == 0) ? "Even" : "Odd");

    return 0;
}