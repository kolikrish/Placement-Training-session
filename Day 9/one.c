#include<stdio.h>
int main() {

    int i,j,arr[3][3];

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter the values : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("HERE IS VALUES OF MATRIXES\n\n");

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf(" %d ",arr[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}