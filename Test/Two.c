#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the values : ");
    scanf("%d",&a);

    printf("Enter the values : ");
    scanf("%d",&b);

    printf("Enter the values : ");
    scanf("%d",&c);

    printf("Before exchange: a=%d, b=%d, c=%d\n", a, b, c);

    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    printf("After exchange: a=%d, b=%d, c=%d\n", a, b, c);

    return 0;
}

