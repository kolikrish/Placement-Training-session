#include<stdio.h>
int main() {

    int i,j;
    int arr1[3][3] , arr2[3][3] , sum[3][3];

    printf("Enter the elements in first matrix 1\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter the elements : ");
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }


    printf("Enter the elements in second matrix 2\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter the elements : ");
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }


    printf("The sum of two matrix is here !\n\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t",sum[i][j]);
        }
        printf("\n\n");
    }

    return 0;

}