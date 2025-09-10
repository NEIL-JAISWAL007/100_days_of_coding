#include <stdio.h>
int main()
{ int i = 0, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The reverse of %d is: ", n);
    while (n != 0)
    {
        i = i * 10;
        i = i + n % 10;
        n = n / 10;
    }
    printf("%d\n", i);
    return 0;
}
