#include<stdio.h>
int main() {

    int n , m;
    printf("Enter the starting point : ");
    scanf("%d",&n);

    printf("Enter the ending point : ");
    scanf("%d",&m);

    for(int i=n; i<=m; i++) {
        printf("%d\n",i);
    }

    return 0;
}