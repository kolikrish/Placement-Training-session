// Calculate the average of all the 2D array elements.

#include<stdio.h>
int main() {

    int i,j,arr[3][3];
    int sum = 0;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter the values : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            sum += arr[i][j];
        }
    }

    printf("The sum of the array is : %d\n",sum);
    int avg = sum / 3;
    printf("The average is : %d",avg);

    return 0;
}