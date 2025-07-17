#include<stdio.h>
int main() {

    int n, sum = 0;
    printf("Enter the value : ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++) {
        printf("%d\t",i);
        sum += i;
    }

    printf("\nThe sum is : %d",sum);

    return 0;

}