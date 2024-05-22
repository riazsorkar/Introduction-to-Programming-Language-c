#include<stdio.h>
int main(){
    int a, b;
    // Input
    scanf("%d %d",&a,&b);
    // Calculation
    int summation = a+b;
    int subtraction = a-b;
    int multiplication = a*b;
    float division = a*1.0/b*1.0;
    // Print
    printf("%d + %d = %d\n",a,b,summation);
    printf("%d - %d = %d\n",a,b,subtraction);
    printf("%d * %d = %d\n",a,b,multiplication);
    printf("%d / %d = %.2f",a,b,division);
    return 0;
};