// Caluculate the sum of two number using function void type without arguments.

#include<stdio.h>
void Additon();

int main() {
    
    Additon();

    return 0;
}

void Additon() {
    int a,b,sum;
    printf("Enter the number : ");
    scanf("%d",&a);

    printf("Enter the number : ");
    scanf("%d",&b);

    sum = a + b;
    printf("The sum is : %d",sum);
}