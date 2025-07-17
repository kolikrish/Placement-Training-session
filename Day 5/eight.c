#include<stdio.h>
int main() {

    int n, sum =0;
    printf("enter the number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        printf("%d\t",i);
        sum += i;
    }

    printf("\nThe sum of %d natural numbers : %d",n,sum);
}