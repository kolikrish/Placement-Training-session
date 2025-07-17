#include <stdio.h>

int main() {
    int a, b, c, d, greatest;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a >= b && a >= c && a >= d)
        greatest = a;
    else if (b >= a && b >= c && b >= d)
        greatest = b;
    else if (c >= a && c >= b && c >= d)
        greatest = c;
    else
        greatest = d;

    printf("The greatest number is: %d\n", greatest);

    return 0;
}