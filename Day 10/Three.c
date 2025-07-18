// Calculate the reverse of given number using function.

#include <stdio.h>
void reverseNumber();

int main() {

    reverseNumber();
    return 0;
}

void reverseNumber() {

    int num, reverse = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    printf("Reversed number: %d\n", reverse);
}
