#include <stdio.h>
int main()
{ int i, n, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i=1 ; i<=n ; i++)
    {
        if (i % 2 == 0) {
            product = product * i;
        }
    }
    printf("Product of even numbers from 1 to %d is: %d\n", n, product);
    return 0;
}
