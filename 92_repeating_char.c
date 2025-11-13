/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    printf("Enter a string: ");
    scanf("%s", a);
    int f[26] = {0}, i, x = -1;
    for(i = 0; a[i] != '\0'; i++) {
        f[a[i] - 'a']++;
        if(f[a[i] - 'a'] == 2) {
            x = a[i];
            break;
        }
    }
    if(x != -1) printf("%c", x);
    else printf("No repeating character");
    return 0;
}
