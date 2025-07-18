// Find the greatest digit of given number using void type with arguments.

#include <stdio.h>
void greatestDigit(int);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    greatestDigit(num);

    return 0;
}

void greatestDigit(int x) {

    int digit, max = 0;

    while (x > 0) {
    digit = x % 10;
    if (digit > max) {
        max = digit;
    }
        x = x / 10;
    }

    printf("Greatest digit is: %d\n", max);
}