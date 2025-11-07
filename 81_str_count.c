/*
Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main() 
{
    char s[1000];
    int c = 0;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    while (s[c] != '\0' && s[c] != '\n')
        c++;
    printf("Number of characters: %d", c);
    return 0;
}

