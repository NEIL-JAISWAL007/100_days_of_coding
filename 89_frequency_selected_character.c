/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], ch;
    printf("Enter a string: ");
    scanf("%s", a);
    printf("Enter a character: ");
    scanf(" %c", &ch);
    int i, c = 0;
    for(i = 0; i < strlen(a); i++) {
        if(a[i] == ch) c++;
    }
    printf("%d", c);
    return 0;
}
