#include <stdio.h>
int main()
{
    int percentage;
    printf("Enter the percentage (0-100): ");
    scanf("%d", &percentage);
    if (percentage >= 90 && percentage <= 100)
    {
        printf("Grade A\n");
    }
    else if (percentage >= 80 && percentage <= 89)
    {
        printf("Grade B\n");
    }
    else if (percentage >= 70 && percentage <= 79)
    {
        printf("Grade C\n");
    }
    else if (percentage >= 60 && percentage <= 69)
    {
        printf("Grade D\n");
    }
    else if (percentage < 60 && percentage >= 0)
    {
        printf("Grade F\n");
    }
    else
    {
        printf("Invalid percentage entered.\n");
    }

    return 0;
}
