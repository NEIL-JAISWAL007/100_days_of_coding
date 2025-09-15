/*
Q16: Write a program to input three numbers and find the largest among them using if–else.

Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number 1 :");
    scanf("%d", &a);
    printf("Enter the number 2 :");
    scanf("%d", &b);
    printf("Enter the number 3 :");
    scanf("%d", &c);
    if (b < a && c < a)
    {
        printf("%d is the greatest number", a);
    }
    else if (a < b && c < a)

    {
        printf("%d is the greatest number ", b);
    }
    else
    {
        printf("%d is the greatest number ", c);
    }
}
