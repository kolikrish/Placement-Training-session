#include<stdio.h>
int main() {

    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if(age >= 18) {
        printf("You can vote !");
    }

    else {
        printf("You are not eligible to vote !");
    }

    return 0;
}