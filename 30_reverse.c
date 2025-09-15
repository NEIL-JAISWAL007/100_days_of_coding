/*
Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/#include <stdio.h>
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
