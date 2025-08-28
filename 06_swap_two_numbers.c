#include <stdio.h>
int main()
{
    int a, b, swap;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);
    swap = a;
    a = b;
    b = swap;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
