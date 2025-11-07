/*
Q84: Convert a lowercase string to uppercase without using built-in functions.

Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

int main() 
{
    char s[1000];
    int i = 0;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    while (s[i] != '\0' && s[i] != '\n')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        i++;
    }
    printf("Uppercase string: %s", s);
    return 0;
}
