#include<stdio.h>
void evenOdd(int n);

int main() {

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    evenOdd(n);

    return 0;
}


void evenOdd(int x) {
    if(x % 2 == 0) {
        printf("The number is Even !");
    }

    else {
        printf("The number is Odd !");
    }
}