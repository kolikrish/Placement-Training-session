#include <stdio.h>

int main() {

    float sum = 0, average, percentage;
    int a = 80, b =98, c = 89, d = 86 , e = 92;

    sum = a + b + c + d + e;

    average = sum / 5.0;
    percentage = (sum / 500.0) * 100;

    printf("\nAverage: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    printf("Grade: ");
    // if(percentage >= 90)
    //     printf("A\n");
    // else if(percentage >= 80)
    //     printf("B\n");
    // else if(percentage >= 70)
    //     printf("C\n");
    // else if(percentage >= 60)
    //     printf("D\n");
    // else
    //     printf("F\n");

    (percentage >= 90) ? printf("Grade A ") : 

    return 0;
}