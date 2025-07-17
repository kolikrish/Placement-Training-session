#include<stdio.h>
int main() {

    int num;
    printf("enter the number : ");
    scanf("%d",&num);

    if(num > 10) {
        printf("The value is Greater then 10");
    }

    else {
        printf("The value is Less then 10");
    }

    return 0;
}