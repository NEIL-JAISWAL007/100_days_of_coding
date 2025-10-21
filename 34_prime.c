/*
Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, a = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Not prime\n");
    }
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (a == 0)
        printf("Prime\n");
    else
        printf("Not prime\n");
    return 0;
}