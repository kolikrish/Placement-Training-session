#include<stdio.h>
#include<limits.h>
#include<float.h>

int main() {
    
    printf("\n%d and %d\n",INT_MIN , INT_MAX);
    printf("%d and %d\n",CHAR_MIN , CHAR_MAX);
    
    printf("\n%e and %e\n",DBL_MIN , DBL_MAX);
    printf("\n%F and %F\n",FLT_MIN , FLT_MAX);
    
    return 0;
}