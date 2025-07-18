// Find out the transpose of given matrix.

#include<stdio.h>
int main() {

    int i,j,arr[3][3];

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter the value : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("THE NORMAL 2D MATRIX ARRAY\n\n");

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n\n");
    }

    printf("THE TRANSPOSE OF 2D ARRAY\n\n");

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t",arr[j][i]);
        }
        printf("\n\n");
    }

    return 0;
}