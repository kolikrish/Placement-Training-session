// write a program to read marks of five subjects and calculate percentage and display
// according to the division above 60 A , 40 B , 40 < C , and also display number of ATKT.
// passing marks for each subjects  33.


#include<stdio.h>
int main() {

    int sub1, sub2,sub3,sub4,sub5;
    int atkt = 0;

    printf("Enter the marks of subjects : ");
    scanf("%d",&sub1);

    printf("Enter the marks of subjects : ");
    scanf("%d",&sub2);

    printf("Enter the marks of subjects : ");
    scanf("%d",&sub3);

    printf("Enter the marks of subjects : ");
    scanf("%d",&sub4);

    printf("Enter the marks of subjects : ");
    scanf("%d",&sub5);

    printf("\n");
    int marks = sub1 + sub2 + sub3 + sub4 + sub5;

    float result = (marks * 100)/500;
    printf("The result is : %f\n",result);


    if(result >= 60){
        printf("Passed with A grade division.");
    }

    else if(result >= 40) {
        printf("Passed with B grade division.");
    }

    else if(result < 40) {
        printf("Passed with C grade division.");
    }

    else {
        printf("You are failed.");
    }

    printf("\n");

    if(sub1 < 33) {
        atkt += 1;
    }

    if(sub2 < 33) {
        atkt += 1;
    }

    if(sub3 < 33) {
        atkt += 1;
    }

    if(sub4 < 33) {
        atkt += 1;
    }

    if(sub5 < 33) {
        atkt += 1;
    }

    printf("The atkt is : %d",atkt);

    return 0;
}