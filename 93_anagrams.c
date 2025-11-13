/*
Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);
    if(strlen(a) != strlen(b)) {
        printf("Not anagrams");
        return 0;
    }
    int f[26] = {0}, i;
    for(i = 0; a[i] != '\0'; i++) {
        f[a[i] - 'a']++;
        f[b[i] - 'a']--;
    }
    for(i = 0; i < 26; i++) {
        if(f[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }
    printf("Anagrams");
    return 0;
}
