
/*Q1: Write a program to input two numbers and display their sum.

Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("your number 1 is ");
    scanf("%D", &a);
    printf(" your number 2  is ");
    scanf("%D", &b);
    printf("sum is %d", a + b);
    return 0;
}
