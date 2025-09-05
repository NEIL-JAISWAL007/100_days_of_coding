#include <stdio.h>
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
