// Calculate the average and sum of given arrays.

#include<stdio.h>
int main() {

    int i,j,arr[3][3];
    int sum = 0;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter the elements : ");
            scanf("%d",&arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }

    float avg = sum / 9;
    printf("The sum is : %d\n",sum);
    printf("The average is : %f\n",avg);

    return 0;
}