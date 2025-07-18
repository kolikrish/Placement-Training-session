#include<stdio.h>
void AreaCircle(int);

int main() {

    int r;
    printf("Enter the value : ");
    scanf("%d",&r);

    AreaCircle(r);
    
    return 0;
}

void AreaCircle(int x) {
    
    int area = 2 * 3.14 * x;
    printf("The area is : %d",area);
    
}