/*
Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
int main()
{
    int a , b , prime;
    printf("Enter the limit: ");
    scanf("%d", &b);
    printf("Prime numbers between 1 and %d are: \n", b);
    for (a=0;a<=b; a++)
    {        if (a <= 1)
            continue;
        prime = 1; 
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                prime = 0; 
                break;
            }
        }
        if (prime)
            printf("%d ", a);
    }
    return 0;
}
