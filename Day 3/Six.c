// Program to check the greatest number amongo three numbers

#include<stdio.h>
int main() {

    int num1,num2,num3;
    printf("Enter the first number : ");
    scanf("%d",&num1);

    printf("Enter the second number : ");
    scanf("%d",&num2);

    printf("Enter the third number : ");
    scanf("%d",&num3);


    if(num1 > num2) {
        printf("The number one is greater %d",num1);
    }

    else if (num2 > num3) {
        printf("The number two is greater %d",num2);
    }

    else {
        printf("the number three is greater %d",num3);
    }
}