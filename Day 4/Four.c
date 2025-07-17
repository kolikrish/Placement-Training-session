#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, total, percentage;

    printf("Enter marks for Subject 1: ");
    scanf("%f", &sub1);
    printf("Enter marks for Subject 2: ");
    scanf("%f", &sub2);
    printf("Enter marks for Subject 3: ");
    scanf("%f", &sub3);
    printf("Enter marks for Subject 4: ");
    scanf("%f", &sub4);
    printf("Enter marks for Subject 5: ");
    scanf("%f", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 5);

    printf("Percentage: %f\n", percentage);

    if (percentage >= 40)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");

    return 0;
}