#include <stdio.h>
int main()
{
    int units, bill;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100)
    {
        bill = units * 5;
        printf("The electricity bill is: %d$\n", bill);
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + ((units - 100) * 7);
        printf("The electricity bill is: %d$\n", bill);
    }
    else if (units <= 300)
    {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        printf("The electricity bill is: %d$\n", bill);
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
        printf("The electricity bill is: %d$\n", bill);
    }
    return 0;
}
