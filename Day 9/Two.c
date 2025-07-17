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

    printf("The sum of the array is : %d",sum);

    return 0;
}