/*
Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main() 
{
    char s[1000];
    int i = 0, j, t;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    while (s[i] != '\0' && s[i] != '\n')
        i++;
    j = 0;
    i--;
    while (j < i)
    {
        t = s[j];
        s[j] = s[i];
        s[i] = t;
        j++;
        i--;
    }
    printf("Reversed string: %s", s);
    return 0;
}
