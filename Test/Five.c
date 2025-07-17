#include <stdio.h>

int main() {
    int marks[5];
    int i, sum = 0, atkt = 0;
    float percentage;
    char division;

    printf("Enter marks of five subjects (out of 100):\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
        if(marks[i] < 33) {
            atkt++;
        }
    }

    percentage = sum / 5.0;

    if(atkt > 0) {
        printf("\nNumber of ATKT (subjects failed): %d\n", atkt);
    } else {
        if(percentage > 60)
            division = 'A';
        else if(percentage >= 40)
            division = 'B';
        else
            division = 'C';

        printf("\nPercentage: %.2f%%\n", percentage);
        printf("Division: %c\n", division);
    }

    return 0;
}