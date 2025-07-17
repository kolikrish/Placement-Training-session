#include<stdio.h>
int main() {

    int a,b;
    printf("enter the numebr : ");
    scanf("%d",&a);

    printf("enter the numebr : ");
    scanf("%d",&b);

    if(a > b) {
        printf("The value %d is greater !",a);
    }

    else if(a < b) {
        printf("The value %d is greater !",b);
    }

    else {
        printf("The both values are equal !");
    }

    return 0;
}