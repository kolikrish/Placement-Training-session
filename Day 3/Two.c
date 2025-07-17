#include<stdio.h>
int main() {

    int a,b,c,d,e;
    printf("enter the numbers : ");
    scanf("%d",&a);

    printf("enter the numbers : ");
    scanf("%d",&b);

    printf("enter the numbers : ");
    scanf("%d",&c);

    printf("enter the numbers : ");
    scanf("%d",&d);

    printf("enter the numbers : ");
    scanf("%d",&e);

    int avg = (a+b+c+d+e)/5;
    printf("The average is : %d",avg);

    return 0;
}