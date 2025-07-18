#include<stdio.h>
void findGreatest();

int main() {

    findGreatest();
    return 0;
}


void findGreatest() {

    int a,b,c;
    printf("Enter the numbers : ");
    scanf("%d %d %d",&a , &b , &c);

    if(a > b && a > c) {
        printf("%d is greatest value !",a);
    }

    else if(b > a && b > c) {
        printf("%d is greatest value !",b);
    }

    else if(c > a && c > b) {
        printf("%d is greatest value !",c);
    }

    else {
        printf("Three values are equal !");
    }
}