#include <stdio.h>
int main() {

    int i,j,n;
    char ch;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        char ch = (i % 2 == 1) ? '*' : '#';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}


// *
// ##
// ***
// ####
// *****