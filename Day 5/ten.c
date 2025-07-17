#include<stdio.h>
int main() {

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++) {
        if(i % n == 0){
            printf("Yes its a prime number !");
            break;
        }

        else {
            printf("No , its'a not a prime number !");
        }
    }

    return 0;
}

