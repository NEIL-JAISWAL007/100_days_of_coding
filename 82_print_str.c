/*
Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i
*/
#include <stdio.h>

int main() 
{
    char s[1000];
    int i = 0;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    printf("Characters in the string:\n");
    while (s[i] != '\0' && s[i] != '\n')
    {
        printf("%c\n", s[i]);
        i++;
    }
    return 0;
}

