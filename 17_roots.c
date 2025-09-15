/*
Q17: Write a program to find the roots of a quadratic equation and categorize them.

Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, D, Root1, Root2, d;
    printf("Enter First number:");
    scanf("%d", &a);
    printf("Enter the Second Number:");
    scanf("%d", &b);
    printf("Enter The Third Number");
    scanf("%d", &c);
    D = (b * b) - (4 * a * c);
    if (D == 0)
    {
        printf("Roots are real and same:%d", d = -b / (2 * a));
    }

    else if (D > 0)
    {
        printf("Roots are Real and Distinct\n");
        Root1 = ((-b + sqrt(D)) / (2 * a));
        Root2 = ((-b - sqrt(D)) / (2 * a));
        printf("Root1 is:%d\n", Root1);
        printf("Root2 is:%d\n", Root2);
    }
    else
    {
        printf("No Real roots");
    }
    return 0;
}
