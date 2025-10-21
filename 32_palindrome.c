/*
Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main()
{ 
    int i = 0, n, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        i = i * 10;
        i = i + n % 10;
        n = n / 10;
    }
    if (i == original)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}