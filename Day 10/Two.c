// Calculate the factorial of given number using function

#include<stdio.h>
void findFactorial();

int main() {

    findFactorial();

    return 0;
}


void findFactorial() {
    int n , i , fact = 1;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        fact = fact * i;
    }

    printf("Factorial is : %d",fact);
}