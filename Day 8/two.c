#include<stdio.h>
int main() {

    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++) {
        printf("Enter the array elements : ");
        scanf("%d",&arr[i]);
    }

    int min = arr[0];

    for(int i=0; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Greatest element in the array is : %d\n", min);

    return 0;
}