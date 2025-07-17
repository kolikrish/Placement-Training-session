#include <stdio.h>

int main() {
    int num;
    printf("Enter a number between 1 to 7: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 5) {
        printf("It is a weekday.\n");
    } else if (num == 6 || num == 7) {
        printf("It is a weekend day.\n");
    } else {
        printf("Invalid input. Please enter a number between 1 and 7.\n");
    }

    return 0;
}