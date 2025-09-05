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