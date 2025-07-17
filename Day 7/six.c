#include<stdio.h>
int main() {

    int n,sum=0;
    printf("Enter the array size : ");
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        printf("Enter the array elements : ");
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    printf("The sum is : %d",sum);

    return 0;
}