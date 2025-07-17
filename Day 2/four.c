#include<stdio.h>
int main() {

    int n=5,i,j;
    int k = 1;

    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            printf(" %d ",k++);
        }
        printf("\n");
    }

    return 0;
}


//  1 
//  2  3 
//  4  5  6 
//  7  8  9  10 
//  11  12  13  14  15