/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main()
{
    float a;
    float b;
    printf("enter your first number ");
    scanf("%f", &a);
    printf("enter your second number ");
    scanf("%f", &b);
    printf("sum is %f\n", a + b);
    printf("difference is %f\n", a-b);
    printf("product is %f\n", a*b);
    printf("quotient  is %f\n", a/b);

    return 0.0;
}
